/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:28:38 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/22 20:14:07 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie
{
	public:
		Zombie(std::string name);
		//Zombie(void);
		~Zombie(void);
		void	announce(void);
	private:
		std::string _name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif