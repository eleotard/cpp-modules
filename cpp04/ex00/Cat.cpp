/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:02:34 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/22 13:02:01 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	setType(src.getType());
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaouuu" << std::endl;
}