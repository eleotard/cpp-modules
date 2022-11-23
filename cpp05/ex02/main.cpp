/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:05:27 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/23 19:32:56 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

int main()
{
	Bureaucrat	John("John", 1);
	ShrubberyCreationForm	tree("garden");
	RobotomyRequestForm		patient("Bob");
	PresidentialPardonForm	letter("albert");
	
	std::cout << "\n" << "\033[0m";

	std::cout << "Shrubbery tests: (l27)\033[31m" << std::endl; //145-137
	John.signedForm(tree);
	John.executeForm(tree);

	John.setGrade(150);
	John.executeForm(tree);
	
	John.setGrade(156); //throw erreur et reste a 150
	John.executeForm(tree);

	std::cout << std::endl << "\033[0mRobotomy tests: (l33)\033[32m" << std::endl; //72//45
	John.setGrade(1);
	John.executeForm(patient);

	John.signedForm(patient);
	John.setGrade(50);
	John.executeForm(patient);

	John.setGrade(2);
	John.executeForm(patient);

	std::cout << std::endl << "\033[0mRobotomy tests: (l40)\033[33m" << std::endl; //25//5
	John.setGrade(4);
	John.signedForm(letter);
	John.executeForm(letter);
	
	John.setGrade(10);
	John.executeForm(letter);
	std::cout << "\n" << "\033[0m";
	return (0);
}