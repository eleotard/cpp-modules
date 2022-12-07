/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:48:33 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/07 18:59:29 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <numeric>
#include <exception>
#include <unistd.h>
#include <cstdlib>
#include <bits/stdc++.h>

Span::Span()
{
	return;
}

Span::Span(unsigned int N) : _N(N)
{
	return;
}

Span::Span(Span const& copy) :  _vect(copy._vect), _N(copy._N)
{
	return ;
}

Span::~Span()
{
	return ;
}

Span &Span::operator=(Span const& src)
{
	if (this != &src)
	{
		_N = src._N;
		_vect = src._vect;	
	}
	return (*this);
}

void	Span::printVect()
{
	std::cout << "Array contains : ";
	for (unsigned long i = 0; i < _vect.size(); i++)
    	std::cout << _vect[i] << " ";
	std::cout << std::endl;
}

void	Span::addNumber(int nb)
{
	try
	{
		if (_vect.size() < _N)
			_vect.push_back(nb);
		else 
			throw FullArray();	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Span::testSize() const
{
		if (_vect.size() == 0)
			throw NoMembers();
		else if (_vect.size() == 1)
			throw OneMember();	
}

int	Span::shortestSpan()
{
	int res;
	testSize();
	int result[_vect.size()];
	unsigned long int i;
	
	std::sort(_vect.begin(), _vect.end());
	std::adjacent_difference(_vect.begin(), _vect.end(), result);
	for (i = 0; i < _vect.size(); i++)
	{
		if (result[i] < 0)
			result[i] = result[i] * (-1);
	}
	// std::cout << "Result contains : ";
	// for (unsigned long i = 0; i < _vect.size(); i++)
    // 	std::cout << result[i] << " ";
	// std::cout << std::endl;
	res = *(std::min_element(result, result + _vect.size()));
	return (res);
}

int	Span::longestSpan()
{
	int res;

	testSize();
	std::vector<int>::iterator it_min;
	std::vector<int>::iterator it_max;
	it_min = std::min_element(_vect.begin(), _vect.end());
	it_max = std::max_element(_vect.begin(), _vect.end());
	
	res = *it_max - *it_min;
	if (res < 0)
		res = res * (-1);	
	return (res);
}

















// int	Span::shortestSpan()
// {
// 	int res;
// 	try
// 	{
// 		testSize();
// 		int result[_vect.size()];
// 		unsigned long int i;
		
// 		std::adjacent_difference(_vect.begin(), _vect.end(), result);
// 		std::cout << "Array contains :";
// 		for (i = 0; i < _vect.size(); i++)
// 			std::cout << " " << result[i];
// 		std::cout << "\n";
// 		for (i = 0; i < _vect.size(); i++)
// 		{
// 			if (result[i] < 0)
// 				result[i] = result[i] * (-1);
// 		}
// 		res = *(std::min_element(result, result + _vect.size()));
// 		return (res);
// 	}
// 	catch (std::exception &e)
// 	{
// 		res = -1;
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (res);
	
// }

// int	Span::longestSpan()
// {
// 	int res;
// 	try
// 	{
// 		testSize();
// 		std::vector<int>::iterator it_min;
// 		std::vector<int>::iterator it_max;
// 		it_min = std::min_element(_vect.begin(), _vect.end());
// 		it_max = std::max_element(_vect.begin(), _vect.end());
		
// 		res = *it_max - *it_min;
// 		if (res < 0)
// 			res = res * (-1);	
// 	}
// 	catch (std::exception &e)
// 	{
// 		res = -1;
// 		std::cout << e.what() << std::endl;
// 	}
// 	return (res);
// }