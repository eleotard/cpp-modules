/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:45 by elsie             #+#    #+#             */
/*   Updated: 2022/10/27 15:05:43 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	/*Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout << "\n\n";*/
	
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	//jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	std::cout << "\n\n";
	return 0;
}