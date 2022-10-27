/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:40 by elsie             #+#    #+#             */
/*   Updated: 2022/10/27 15:04:53 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "constructed humanB " << this->_name << std::endl;
	return ;
}

HumanB::HumanB(void)
{
	std::cout << "constructed humanB" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "destructed humanB" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with ";
	if (!this->_Weapon)
		std::cout << "nothing more than his own bravery" << std::endl;
	else
		std::cout << "their " << (*this->_Weapon).getType() << std::endl;
}
