/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:33 by elsie             #+#    #+#             */
/*   Updated: 2022/10/24 16:57:09 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name = name; 
	this->_Weapon = &weapon;
	std::cout << "constructed humanA " << this->_name << std::endl;
	return ;
	
}

HumanA::HumanA(void)
{
	std::cout << "constructed humanA" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "destructed humanA" << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << (*this->_Weapon).getType() << std::endl;
}
