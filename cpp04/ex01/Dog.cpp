/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:02:43 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 15:04:54 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	_dog_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	return;
}

Dog::~Dog()
{
	if (_dog_brain != 0)
		delete (_dog_brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &src)
{
	setType(src.getType());
	_dog_brain = new Brain(*(src._dog_brain));
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Wouf Wouf" << std::endl;
}