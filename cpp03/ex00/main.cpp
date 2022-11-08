/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:49:47 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 01:06:58 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("bob");
	ClapTrap bob2(bob);

	bob.attack("bob2");
	bob.beRepaired(5);
	bob.takeDamage(10);

	for (int i = 0; i < 11; i++)
	{
		bob2.takeDamage(1);
		bob2.attack("loop");
	}
}