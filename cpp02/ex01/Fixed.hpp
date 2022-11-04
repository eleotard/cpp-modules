/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:25:01 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/04 18:10:01 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <bitset>

class Fixed
{

	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float fl);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed &operator=(Fixed const & rhs);
		//std::ostream& operator<<(std::ostream& os, const Fixed &data);
		int 	getRawBits (void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	_fixed_point_nb;
		static const int _nbofbits_fracpart = 8; //nb de bits de la partie fractionnaire

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */