/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:14:31 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/06 19:39:07 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class	NotFoundException : public std::exception 
{
	public:
		const char *what() const throw()
		{
			return ("Element not found");
		}
};

template<typename T> //on part du principe que T est un container d'entier
void	easyfind(T &a, int n)
{
	typename T::iterator it;
	it = std::find(a.begin(), a.end(), n);
	if (it != a.end())
    	std::cout << "Element found : " << *it << '\n';
 	else {
		throw NotFoundException();
	}
}

#endif