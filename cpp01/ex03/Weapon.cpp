/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:54 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 19:02:01 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "constructed" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "destructed" << std::endl;
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