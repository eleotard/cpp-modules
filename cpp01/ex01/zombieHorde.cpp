/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:06:16 by elsie             #+#    #+#             */
/*   Updated: 2022/10/27 14:48:18 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*ptr;
	int		i;
	std::string	num;
	
	i = 0;
	ptr = new Zombie[N];
	while (i < N)
	{
		std::stringstream 	ss;
		ss << i;
		ss >> num;
		ptr[i].setName(name + " " + num);
		i++;
	}
	return (&ptr[0]);
}