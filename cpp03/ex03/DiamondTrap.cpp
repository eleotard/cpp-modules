/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:44:22 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/10 21:27:29 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	setName("unnamed");
	setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
	std::cout << "DiamondTrap hit points:" << _hit_points << std::endl;
	std::cout << "DiamondTrap energy points:" << _energy_points << std::endl;
	std::cout << "DiamondTrap attack damage:" << _attack_damage << std::endl;
	std::cout << "Constructed DiamondTrap by default" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	setName(name);
	setHitPoints(getHitPoints());
	setEnergyPoints(getEnergyPoints());
	setAttackDamage(getAttackDamage());
	std::cout << std::endl;
	std::cout << "DiamondTrap hit points:" << _hit_points << std::endl;
	std::cout << "DiamondTrap energy points:" << _energy_points << std::endl;
	std::cout << "DiamondTrap attack damage:" << _attack_damage << std::endl;
	std::cout << "Constructed DiamondTrap " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	*this = src;
	_name = src.getName() + " copy";
	std::cout << "Constructed DiamondTrap " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructed DiamondTrap" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " says : Bro, lets do a High five ??????" << std::endl;
}
