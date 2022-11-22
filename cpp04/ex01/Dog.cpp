/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:02:43 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/22 12:58:06 by elsie            ###   ########.fr       */
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
	std::cout << "Dog copy constructor called" << std::endl;
	_type = copy._type;
	_dog_brain = new Brain(*(copy._dog_brain));
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
	_type = src._type;
	*_dog_brain = *src._dog_brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog: Wouf Wouf" << std::endl;
}