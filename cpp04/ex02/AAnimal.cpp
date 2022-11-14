/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:12 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:30:13 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	_type = "AAnimal";
	std::cout << "AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal of type " << _type << " constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	*this = copy;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	setType(src.getType());
	return (*this);
}

std::string	const &AAnimal::getType() const
{
	return(_type);
}

void	AAnimal::setType(const std::string &type)
{
	_type = type;
}