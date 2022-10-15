/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:07 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/16 00:34:20 by eleotard         ###   ########.fr       */
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
	_contact_tab[_contact_nb].fill(first_name, last_name, nickname,
		phone_number, darkest_secret);
	_contact_nb++;
}

void	PhoneBook::print_phonebook()
{
	int i;

	i = 0;
	while (i < 8)
	{
		_contact_tab[i].print_contact(i + 1);
		i++;
	}
}
//fonctions necessaires:

//fonction qui cree le tableau de contacts
//pouvoir afficher le tableau de contacts
//
//fonction qui prend un contact et le fout dans un tableau
//

