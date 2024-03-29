/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:49:47 by elsie             #+#    #+#             */
/*   Updated: 2022/11/10 22:59:02 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// std::cout << "\033[34m"; //bleu
	std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

	
	ClapTrap bob("bob");
	FragTrap thierry("thierry");
	
	std::cout << "\033[34m"; //bleu ClapTrap

	bob.attack("bob2");
	bob.beRepaired(5);
	bob.takeDamage(10);

	for (int i = 0; i < 11; i++)
	{
		bob.takeDamage(1);
		bob.attack("loop");
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\033[35m"; //violet FragTrap

	thierry.attack("tierry2");
	thierry.beRepaired(5);
	thierry.takeDamage(10);

	for (int i = 0; i < 11; i++)
	{
		thierry.takeDamage(1);
		thierry.attack("loop");
	}
	thierry.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[32m"; //vert
}