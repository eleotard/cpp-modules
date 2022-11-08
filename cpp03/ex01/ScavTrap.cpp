/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:13:36 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 22:02:54 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Constructed ScavTrap by default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	std::cout << "Constructed ScavTrap " << _name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
	setName(src.getName() + " copy");
	std::cout << "Constructed ScavTrap " << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " entered in Gatekeeper mode."
		<< std::endl;
}

void	ScavTrap::attack(const std::string &name)
{
	std::cout << "ScavTrap " << _name << " attack " << name
		<< ", causing " << _attack_damage << " points of damages!" << std::endl;
}