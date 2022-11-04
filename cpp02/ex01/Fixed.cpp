/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:25:08 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/04 18:33:18 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CONSTRUCTEURS*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int nb) //convertit le int en virgule fixe
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_nb = nb << _nbofbits_fracpart;
}

Fixed::Fixed(const float fl) //convertit le float en virgule fixe
{
	int		dec_part;
	int		fract_part;
	float	fract_part_fl;
	
	std::cout << "Float constructor called" << std::endl;
	dec_part = (int)fl;
		std::cout << "\tdec part = "<< dec_part << std::endl;
	fract_part_fl = fl - (float)dec_part;
		std::cout << "\tfrac part = " << fract_part_fl << std::endl;
	_fixed_point_nb = dec_part << _nbofbits_fracpart;
	fract_part =  roundf(fract_part_fl / 0.00390625);
		std::cout << "\tfrac part INT= " << fract_part << std::endl;
	_fixed_point_nb = _fixed_point_nb + fract_part;
		std::cout << "\tres = " << (*this).toFloat() << std::endl;
}

/*DESTRUCTEUR*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*CONVERSION*/
float	Fixed::toFloat(void) const //convertit un nb fix en float
{
	float	res;
	int		dec_tmp;
	u_int8_t	f_tmp;

	dec_tmp = _fixed_point_nb >> 8;
	f_tmp = _fixed_point_nb;
	res = (float)dec_tmp + ((float)f_tmp * 0.00390625);
	return (res);
}

int	Fixed::toInt(void) const //convertit un nb fix en int
{
	int nb;
	
	if (getRawBits())
		nb = _fixed_point_nb >> _nbofbits_fracpart;
	return (nb);
}

/*SET/GET*/

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_nb);
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_nb = raw;
}

/*OVERLOAD*/

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &data) //pourquoi on met pas Fixed:: ?
//parce que ca n'agit pas directement sur ma classe
{
    os << data.toFloat(); //Comment il sait quon parle de la valeur de fixed_point_nb?
	//pck la fonction to float dans son code va agir sur cette variable et pas sur l'autre
    return (os);
}
