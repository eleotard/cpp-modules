/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:49:47 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 22:02:28 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap oui;
	ScavTrap marine("marine");
	ScavTrap non(oui);
	ClapTrap hello;

	std::cout << std::endl;
	marine.guardGate();
	marine.attack("jean");
	hello.attack("suzie");
	std::cout << std::endl;

}