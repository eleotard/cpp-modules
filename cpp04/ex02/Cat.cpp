/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:02:34 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:27:45 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	_cat_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &copy) : AAnimal(copy)
{
	*this = copy;
	return;
}

Cat::~Cat()
{
	if (_cat_brain != 0)
		delete(_cat_brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	setType(src.getType());
	_cat_brain = new Brain(*(src._cat_brain));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat: Miaouuu" << std::endl;
}
