/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:05:44 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 20:41:48 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form("ShrubberyCreationForm:", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm infos constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


/*FORM JOB*/
void ShrubberyCreationForm::scf_duty(Bureaucrat const& B) const
{
	if (B.getGrade() > _grade_to_exe)
		throw Form::GradeTooLowException();
		
	std::string		filename(_target + "_shrubbery");
	std::ofstream	ofs(filename.c_str(), std::ios::app);
	if (!ofs.is_open())
	{
		std::cerr << "Could not open the output file" << std::endl;
		throw std::exception();
	}
	ofs << "		 &&& &&  & &&" << std::endl
		<< "      && &\/&\|& ()|/ @, &&" << std::endl
		<< "      &\/(/&/&||/& /_/)_&/_&" << std::endl
		<< "   &() &\/&|()|/&\/ '% & ()" << std::endl
		<< "  &_\_&&_\ |& |&&/&__%_/_& &&" << std::endl
		<< "&&   && & &| &| /& & % ()& /&&" << std::endl
		<< " ()&_---()&\&\|&&-&&--%---()~" << std::endl
		<< "     &&     \|||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "       , -=-~  .-^- _" << std::endl
		<< std::endl;

	ofs.close();
}
