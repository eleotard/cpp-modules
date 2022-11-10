/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:28:31 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/09 14:59:09 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Default constructor called" << this->_name << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) //initialise la variable avec ce quon recupere -
{
	announce();
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructed " << this->_name << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
