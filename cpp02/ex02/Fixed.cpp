/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:25:08 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/10 18:17:59 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CONSTRUCTEURS*/

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int nb) //convertit le int en virgule fixe
{
	//std::cout << "Int constructor called" << std::endl;
	_fixed_point_nb = nb << _nbofbits_fracpart;
}

Fixed::Fixed(const float fl) //convertit le float en virgule fixe
{
	int		dec_part;
	int		fract_part;
	float	fract_part_fl;
	
	//std::cout << "Float constructor called" << std::endl;
	dec_part = (int)fl; 
	fract_part_fl = fl - (float)dec_part;
		//std::cout << "\tfrac part = " << fract_part_fl << std::endl;
	_fixed_point_nb = dec_part << _nbofbits_fracpart;
	fract_part =  roundf(fract_part_fl / 0.00390625);
		//std::cout << "\tfrac part INT= " << fract_part << std::endl;
	_fixed_point_nb = _fixed_point_nb + fract_part;
		//std::cout << "\tres = " << (*this).toFloat() << std::endl;
}

/*DESTRUCTEUR*/

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

/*CONVERSION*/
float	Fixed::toFloat(void) const //convertit un nb fix en float
{
	float		res;
	int			dec_tmp;
	u_int8_t	f_tmp;

	dec_tmp = _fixed_point_nb >> 8;
	f_tmp = _fixed_point_nb;
	res = (float)dec_tmp + ((float)f_tmp * 0.00390625);
	return (res);
}

int	Fixed::toInt(void) const //convertit un nb fix en int
{
	int		tmp_int;
	float	tmp_fl;
	
	tmp_fl = this->toFloat();
	tmp_int = roundf(tmp_fl);
	return (tmp_int);
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
	//std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return (*this);
}


/*OPERATIONS + - * / */

Fixed	Fixed::operator+(Fixed const &rhs) const
{	
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	if (rhs.getRawBits() == 0)
		return (std::cout << "Division by 0 fobidden" << std::endl, Fixed(this->toFloat()));
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


/*INCREMENTATIONS*/

Fixed	&Fixed::operator++()
{
	setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--()
{
	setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int) //post incr avec int factice
{
	Fixed	copy(*this);
	operator++(); // prefix-increment this instance
	return (copy);   // return la valeur avant incrementation
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);
	operator--();
	return (copy);
}

/*COMPARAISONS*/

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	else if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

/*MIN MAX*/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed &data) //pourquoi on met pas Fixed:: ?
//parce que ca n'agit pas directement sur ma classe
{
    os << data.toFloat();
    return (os);
}
