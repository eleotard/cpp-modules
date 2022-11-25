/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:26:45 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/25 21:58:29 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	return;
}

Data::Data(Data const& src) : _str(src._str)
{
	return ;
}

Data::~Data()
{
	return;
}

Data &Data::operator=(Data const& src)
{
	this->_str = src._str;
	return (*this);
}

void	Data::setStr(std::string const& str)
{
	_str = str;
}

const std::string &Data::getStr() const
{
	return (_str);
}