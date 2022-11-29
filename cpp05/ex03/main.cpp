/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:05:27 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/29 19:29:13 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

int main()
{
	std::cout << "\033[33m"; //jaune
	Intern a;
	Bureaucrat b("Albert", 137);

	try
	{
		Form *form = a.makeForm("gfhfghfg", "Albert");
		std::cout << "\n" << "\033[0m";
		
		std::cout << *form;
		std::cout << "Target of the form: "<< form->getTarget() << std::endl;
		std::cout << std::endl;
		b.signedForm(*form);
		std::cout << *form;
		b.executeForm(*form);
		
		std::cout << "\033[33m" << "\n"; //jaune
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[35m" << e.what() << "\033[33m" << '\n' << '\n';
	}
	
	std::cout << "\033[33m";
	try
	{
		Form *form = a.makeForm("ShrubberyCreationForm", "Albert");
		std::cout << "\n" << "\033[0m";
		
		std::cout << *form;
		std::cout << "Target of the form: "<< form->getTarget() << std::endl;
		std::cout << std::endl;
		b.signedForm(*form);
		std::cout << *form;
		b.executeForm(*form);
		
		std::cout << "\033[33m" << "\n"; //jaune
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[35m" << e.what() << "\033[33m" << '\n';
	}

	return (0);
}