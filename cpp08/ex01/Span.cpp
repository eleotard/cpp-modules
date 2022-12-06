/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:48:33 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/06 21:19:44 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <numeric>

Span::Span()
{
	return;
}

Span::Span(unsigned int N) : _N(N)
{
	return;
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int nb)
{
	if (_vect.size() < _N)
		_vect.push_back(nb);
	else 
		throw FullArray();
}

int	Span::shortestSpan()
{
	if (_vect.size() == 0)
		throw NoMembers();
	else if (_vect.size() == 1)
		throw OneMember();
		
	std::vector<int>::iterator it_begin;
	std::vector<int>::iterator it_end;
	std::vector<int>::iterator res;
	int result[_vect.size()];
	int i;
	
	std::adjacent_difference(it_begin, it_end, result);
	for (i = 0; i < _vect.size(); i++)
	{
		if (result[i] < 0)
			result[i] = result[i] * (-1);
	}
	res = std::min_element(res, res + _vect.size());
	return (*res);
}

int	Span::longestSpan()
{
	if (_vect.size() == 0)
		throw NoMembers();
	else if (_vect.size() == 1)
		throw OneMember();
	std::vector<int>::iterator it_min;
	std::vector<int>::iterator it_max;
	int res;
	it_min = std::min_element(_vect.begin(), _vect.end());
	it_max = std::max_element(_vect.begin(), _vect.end());
	
	res = *it_max - *it_min;
	if (res < 0)
		res = res * (-1);
	return (res);
}