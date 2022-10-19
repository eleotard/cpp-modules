/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:01 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/19 18:05:15 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::setContact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number, std::string darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

void	Contact::print_contact(int index) const
{
	if (this->_first_name.empty())
		return ;
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->_first_name;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->_last_name;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->_nickname << "|" << std::endl;
}

void	Contact::print_1_contact(int index) const
{
	if (this->_first_name.empty())
		return ;
	std::cout << "index:\t\t" << index << std::endl;
	std::cout << "first_name:\t" << this->_first_name << std::endl;
	std::cout << "last_name:\t" << this->_last_name << std::endl;
	std::cout << "nick_name:\t" << this->_nickname << std::endl;
}
