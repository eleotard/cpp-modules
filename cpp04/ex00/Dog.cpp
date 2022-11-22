/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:02:43 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/22 13:01:48 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	setType(src.getType());
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Wouf Wouf" << std::endl;
}