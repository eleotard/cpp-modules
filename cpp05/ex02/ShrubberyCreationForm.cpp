/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:05:44 by elsie             #+#    #+#             */
/*   Updated: 2022/11/29 19:34:13 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm infos constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
	: Form(copy._name, copy._grade_to_sign, copy._grade_to_exe), _target(copy._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string const& ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

/*FORM JOB*/
void ShrubberyCreationForm::execute(Bureaucrat const& B) const
{
	if (B.getGrade() > _grade_to_exe)
		throw Form::GradeTooLowException();
	if (_signed != 1)
		throw Form::NotSigned();
		
	std::string		filename(_target + "_shrubbery");
	std::ofstream	ofs(filename.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Could not open the output file" << std::endl;
		throw std::exception();
	}
	ofs << "		 &&& &&  & &&" << std::endl
		<< "      && &|./&||& ()|/ @, &&" << std::endl
		<< "      &||(/&/&||/& /_/)_&/_&" << std::endl
		<< "   &() &||&|()|/&|| '% & ()" << std::endl
		<< "  &_||&&_| |& |&&/&__%_/_& &&" << std::endl
		<< "&&   && & &| &| /& & % ()& /&&" << std::endl
		<< " ()&_---()&|&||&&-&&--%---()~" << std::endl
		<< "     &&     ||||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "             |||" << std::endl
		<< "       , -=-~  .-^- _" << std::endl
		<< std::endl;

	ofs.close();
}
