/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:07 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/17 16:15:53 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	_contact_nb = 0;
	return ; 
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


void	PhoneBook::display_add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	std::cout << "First name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, darkest_secret);
	if (first_name.empty() || last_name.empty() || nickname.empty() ||
		phone_number.empty() || darkest_secret.empty())
		return ;
	if (_contact_nb < 8)
		_contact_tab[_contact_nb].fill(first_name, last_name, nickname,
			phone_number, darkest_secret);
	else
	{
		_contact_nb = 0;
		_contact_tab[_contact_nb].fill(first_name, last_name, nickname,
			phone_number, darkest_secret);
	}
	_contact_nb++;
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



