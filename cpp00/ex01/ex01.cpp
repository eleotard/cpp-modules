/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:50:18 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/17 21:08:30 by eleotard         ###   ########.fr       */
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
		std::getline(std::cin, user_enter);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (user_enter.compare(std::string("ADD")) == 0)
		{
			std::cout << "Vous avez tape ADD" << std::endl;
			phoneb.display_add();
		}
		else if (user_enter.compare(std::string("SEARCH")) == 0)
		{
			phoneb.print_phonebook();
			std::cout << "Please type the index of the contact you try to reach :" << std::endl;
			std::getline(std::cin, index_s);
			std::istringstream(index_s) >> index;
			std::cout << index << std::endl;
			if (index > 0 && index < 9)
				phoneb.print_one_contact(index);
			else
				std::cout << "Wrong index" << std::endl;
		}
		else if (user_enter.compare(std::string("EXIT")) == 0)
		{
			std::cout << "Vous avez tape EXIT" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid command : " << user_enter << std::endl;
		//std::cin.ignore(INT_MAX, '\n');
	}
	
	/*au debut programme vide
	cmd de lutilisateur qui permet de remplir le phonebook
	ADD -> demande les infos
	SEARCH -> affiche le contact demande
	*/
	
	return (0);
}