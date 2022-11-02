/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:25:01 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/02 14:15:12 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:
		Fixed();
		Fixed(int fixcomanb);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed &	operator=( Fixed const & rhs );
		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int	_fixcomanb;
		static const int _nbofbits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */