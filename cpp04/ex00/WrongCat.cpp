/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:29:46 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/11 00:29:48 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	setType("WrongCat");
	std::cout << "WrongCat constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	setType(src.getType());
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat: WrongMiaouuuuuuu"<< std::endl;
}