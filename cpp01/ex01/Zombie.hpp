/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:05:59 by elsie             #+#    #+#             */
/*   Updated: 2022/11/09 15:02:46 by eleotard         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif