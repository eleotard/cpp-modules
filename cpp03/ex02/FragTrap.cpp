/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:18:21 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/09 17:27:54 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setName("unnamed");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "Constructed FragTrap by default" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "Constructed FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	_name = src.getName() + " copy";
	std::cout << "Constructed FragTrap " << _name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}