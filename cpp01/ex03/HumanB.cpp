/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:40 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 18:48:05 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(void)
{
	std::cout << "constructed" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "destructed" << std::endl;
	return ;
}