/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:12 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/11 01:22:39 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal of type " << _type << " constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	setType(src.getType());
	return (*this);
}

std::string	const &Animal::getType() const
{
	return(_type);
}

void	Animal::setType(const std::string &type)
{
	_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal: *some animal noise*" << std::endl;
}