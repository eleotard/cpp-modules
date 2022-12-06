/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:12:51 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/06 17:50:14 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
	vect.push_back(78);
	vect.push_back(9);
	vect.push_back(3);
	
	std::list<int> lst;
	lst.push_back(1);
    lst.push_back(1);
    lst.push_back(1);
	lst.push_back(2);
	lst.push_back(8);
	lst.push_back(9);

	try
	{
		easyfind(vect, 10);
		easyfind(vect, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		easyfind(lst, 2);
		easyfind(lst, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}