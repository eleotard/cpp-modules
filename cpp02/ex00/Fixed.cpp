/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:25:08 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/02 14:24:20 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int fixcomanb) : _fixcomanb(fixcomanb)
{
	std::cout << "constructed with a parameter" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(src);
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixcomanb);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixcomanb = raw;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}
