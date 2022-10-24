/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:54 by elsie             #+#    #+#             */
/*   Updated: 2022/10/24 15:37:31 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "constructed weapon " << this->_type << std::endl;
	return ;
}

Weapon::Weapon(void)
{
	std::cout << "constructed weapon" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "destructed weapon " << this->_type << std::endl;
	return ;
}

std::string	const &Weapon::getType(void) const
{
	std::string const	&typeREF = this->_type;
	return (typeREF);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}