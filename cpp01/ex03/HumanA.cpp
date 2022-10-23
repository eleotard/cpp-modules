/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:33 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 18:47:46 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(void)
{
	std::cout << "constructed" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "destructed" << std::endl;
	return ;
}

