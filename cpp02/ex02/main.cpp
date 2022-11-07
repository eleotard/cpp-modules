/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:23:57 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/07 21:20:54 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Peu importe le constructeur, convertit la donnee en nb a virg fixe

int main()
{
	Fixed a(3);
	Fixed b(4);
	Fixed c(3.5f);
	Fixed d(3.6f);

	std::cout << "\033[34m";
	std::cout << std::endl << "Operateur <" << std::endl;
	std::cout << a << " < " << b << ": " << (a < b) << std::endl;
	std::cout << a << " < " << a << ": " << (a < a) << std::endl;
	std::cout << b << " < " << a << ": " << (b < a) << std::endl;

	std::cout << c << " < " << d << ": " << (c < d) << std::endl;
	std::cout << d << " < " << c << ": " << (d < c) << std::endl;
	std::cout << c << " < " << c << ": " << (c < c) << std::endl;

	std::cout << std::endl << "Operateur <=" << std::endl;
	std::cout << a << " <= " << b << ": " << (a <= b) << std::endl;
	std::cout << a << " <= " << a << ": " << (a <= a) << std::endl;
	std::cout << b << " <= " << a << ": " << (b <= a) << std::endl;

	std::cout << c << " <= " << d << ": " << (c <= d) << std::endl;
	std::cout << d << " <= " << c << ": " << (d <= c) << std::endl;
	std::cout << c << " <= " << c << ": " << (c <= c) << std::endl;

	std::cout << std::endl << "Operateur >" << std::endl;
	std::cout << a << " > " << b << ": " << (a > b) << std::endl;
	std::cout << a << " > " << a << ": " << (a > a) << std::endl;
	std::cout << b << " > " << a << ": " << (b > a) << std::endl;

	std::cout << c << " > " << d << ": " << (c > d) << std::endl;
	std::cout << d << " > " << c << ": " << (d > c) << std::endl;
	std::cout << c << " > " << c << ": " << (c > c) << std::endl;

	std::cout << std::endl << "Operateur >=" << std::endl;
	std::cout << a << " >= " << b << ": " << (a >= b) << std::endl;
	std::cout << a << " >= " << a << ": " << (a >= a) << std::endl;
	std::cout << b << " >= " << a << ": " << (b >= a) << std::endl;

	std::cout << c << " >= " << d << ": " << (c >= d) << std::endl;
	std::cout << d << " >= " << c << ": " << (d >= c) << std::endl;
	std::cout << c << " >= " << c << ": " << (c >= c) << std::endl;

	std::cout << std::endl << "Operateur ==" << std::endl;
	std::cout << a << " == " << a << ": " << (a == a) << std::endl;
	std::cout << a << " == " << b << ": " << (a == b) << std::endl;

	std::cout << c << " == " << c << ": " << (c == c) << std::endl;
	std::cout << c << " == " << d << ": " << (d == c) << std::endl;

	std::cout << std::endl << "Operateur !=" << std::endl;
	std::cout << a << " != " << a << ": " << (a != a) << std::endl;
	std::cout << a << " != " << b << ": " << (a != b) << std::endl;

	std::cout << c << " != " << c << ": " << (c != c) << std::endl;
	std::cout << c << " != " << d << ": " << (d != c) << std::endl;

	std::cout << "\033[32m";
	std::cout << std::endl << "Operateur +" << std::endl;
	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << c << " + " << d << " = " << (c + d) << std::endl;

	std::cout << std::endl << "Operateur -" << std::endl;
	std::cout << b << " - " << a << " = " << (b - a) << std::endl;
	std::cout << c << " - " << d << " = " << (c - d) << std::endl;

	std::cout << std::endl << "Operateur *" << std::endl;
	std::cout << b << " * " << a << " = " << (b * a) << std::endl;
	std::cout << c << " * " << d << " = " << (c * d) << std::endl;

	std::cout << std::endl << "Operateur /" << std::endl;
	std::cout << b << " / " << a << " = " << (b / a) << std::endl;
	std::cout << c << " / " << d << " = " << (c / d) << std::endl;

	std::cout << "\033[35m";
	std::cout << std::endl << "Operateur var++" << std::endl;
	std::cout << a << " " << a++ << " " << a << std::endl;
	std::cout << d << " " << d++ << " " << d << std::endl;

	std::cout << std::endl << "Operateur ++var" << std::endl;
	std::cout << b << " " << ++b << " " << b << std::endl;
	std::cout << c << " " << ++c << " " << c << std::endl;

	std::cout << std::endl << "Operateur var--" << std::endl;
	std::cout << a << " " << a-- << " " << a << std::endl;
	std::cout << d << " " << d-- << " " << d << std::endl;

	std::cout << std::endl << "Operateur --var" << std::endl;
	std::cout << b << " " << --b << " " << b << std::endl;
	std::cout << c << " " << --c << " " << c << std::endl;

	std::cout << "\033[33m";
	std::cout << std::endl << "Fonction membre min" << std::endl;
	std::cout << "Min of " << a << " and " << b << " : " << Fixed::min(a, b) << std::endl;
	std::cout << "Min of " << b << " and " << b << " : " << Fixed::min(b, b) << std::endl;
	std::cout << "Min of " << d << " and " << c << " : " << Fixed::min(c, d) << std::endl;
	std::cout << "Min of " << c << " and " << c << " : " << Fixed::min(c, c) << std::endl;

	std::cout << std::endl << "Fonction membre max" << std::endl;
	std::cout << "Max of " << a << " and " << b << " : " << Fixed::max(a, b) << std::endl;
	std::cout << "Max of " << b << " and " << b << " : " << Fixed::max(b, b) << std::endl;
	std::cout << "Max of " << d << " and " << c << " : " << Fixed::max(c, d) << std::endl;
	std::cout << "Max of " << c << " and " << c << " : " << Fixed::max(c, c) << std::endl;
}