/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:23:57 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/02 14:21:33 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a; //Default constructor called
	Fixed b( a ); //Copy constructor called
	//Copy assignment operator called
	//getRawBits member function called
	Fixed c; //Default constructor called
	
	c = b; //Copy assignment operator called
	//getRawBits member function called
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}