/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:12 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/22 13:02:16 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal of type " << _type << " constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
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