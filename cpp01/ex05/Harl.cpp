/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:10:47 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/28 16:56:03 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "constructed Harl" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "destructed Harl" << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i;
	std::string	tab_strings[4]
		= {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f[])()
		= {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	i = 0;
	while (i < 4)
	{
		if (level == tab_strings[i])
		{
			(this->*f[i])();
			return ;
		}
		i++;
	}
	std::cout << "I don't know what to say..." << std::endl;	
}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-" <<
		"triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." <<
		"You didn’t put	enough bacon in my burger !" <<
		"If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." <<
		 "I’ve been coming for years whereas you started working " <<
		 "here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now."
		<< std::endl;
}