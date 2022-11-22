/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:32:18 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/22 13:01:11 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal of type " << _type << " constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	setType(src.getType());
	return (*this);
}

std::string	const &WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << _type << ": *some Wronganimal noise*" << std::endl;	
}