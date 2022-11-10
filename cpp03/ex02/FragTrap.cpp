/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:18:21 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/10 19:32:08 by eleotard         ###   ########.fr       */
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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "Constructed FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
	_name = src.getName() + " copy";
	std::cout << "Constructed FragTrap " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructed FragTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " says : Bro, lets do a High five ??????" << std::endl;
}

void	FragTrap::attack(const std::string &name)
{
	
	if (_energy_points > 0 &&_hit_points > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << name <<
			", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
		std::cout << "Energy points left : " << _energy_points << std::endl;
		std::cout << std::endl;
	}
	else if (_energy_points == 0)
		std::cout << "FragTrap " << _name << " has no energy left to attack." << std::endl;
	else if (_hit_points == 0)
		std::cout << "FragTrap " << _name << " can't attack bc he's dead." << std::endl;
}