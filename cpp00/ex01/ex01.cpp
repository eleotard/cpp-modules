/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:50:18 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/19 18:04:12 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <climits>
#include <cstdlib>
#include <sstream>


void	display_opening(void)
{
	std::cout << "Welcome to the Phonebook" << std::endl;
	std::cout << "  ADD : register a new contact" << std::endl;
	std::cout << "  SEARCH: displays the requested contact" << std::endl;
	std::cout << "  EXIT: exit PhoneBook" << std::endl;
}

int	secure_cin(std::string& s)
{
	std::getline(std::cin, s);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return (1);
	}
	return (0);
}

int main(void)
{
	PhoneBook	phoneb;
	std::string	user_enter;
	std::string index_s;
	int			index;
	
	display_opening();
	while (1)
	{
		index = 0;
		std::cout << "> ";
		if (secure_cin(user_enter))
			break;
		if (user_enter.compare(std::string("ADD")) == 0)
			phoneb.ask_infos_add();
		else if (user_enter.compare(std::string("SEARCH")) == 0)
		{
			phoneb.print_phonebook();
			std::cout << "Please type the index of the contact you try to reach :" << std::endl;
			if (secure_cin(index_s))
				break;
			std::istringstream(index_s) >> index;
			if (index > 0 && index < 9)
				phoneb.print_one_contact(index);
			else
				std::cout << "Wrong index" << std::endl;
		}
		else if (user_enter.compare(std::string("EXIT")) == 0)
			break ;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return (0);
}