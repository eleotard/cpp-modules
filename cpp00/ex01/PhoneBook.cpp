/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:07 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/19 17:56:26 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	secure_cin(std::string& s);

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_contact_nb = 0;
	return ; 
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	PhoneBook::getContact_nb(void) const
{
	return (this->_contact_nb);
}

void	PhoneBook::setContact_nb(int n)
{
	if (n >= 0 && n < 8 )
		this->_contact_nb = n;
}

void	PhoneBook::add_info_to_contact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number, std::string darkest_secret)
{
	if (first_name.empty() || last_name.empty() || nickname.empty() ||
		phone_number.empty() || darkest_secret.empty())
		return ;
	if (_contact_nb < 8)
		_contact_tab[_contact_nb].setContact(first_name, last_name, nickname,
			phone_number, darkest_secret);
	else
	{
		_contact_nb = 0;
		_contact_tab[_contact_nb].setContact(first_name, last_name, nickname,
			phone_number, darkest_secret);
	}
	_contact_nb++;
}

void	PhoneBook::ask_infos_add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	std::cout << "First name : ";
	secure_cin(first_name);
	std::cout << "Last name : ";
	secure_cin(last_name);
	std::cout << "Nickname : ";
	secure_cin(nickname);
	std::cout << "Phone number : ";
	secure_cin(phone_number);
	std::cout << "Darkest secret : ";
	secure_cin(darkest_secret);
	this->add_info_to_contact(first_name, last_name, nickname,
		phone_number, darkest_secret);
}

void	PhoneBook::print_phonebook()
{
	int i;

	i = -1;
	while (++i < 8)
		_contact_tab[i].print_contact(i + 1);

}

void	PhoneBook::print_one_contact(int index)
{
	_contact_tab[index - 1].print_1_contact(index);
}



