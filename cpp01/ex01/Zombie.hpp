/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:05:59 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 16:56:02 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif