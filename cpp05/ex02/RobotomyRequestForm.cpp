/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:07:28 by elsie             #+#    #+#             */
/*   Updated: 2022/11/23 18:47:59 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm infos constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
	: Form(copy._name, copy._grade_to_sign, copy._grade_to_exe), _target(copy._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& B) const
{
	if (B.getGrade() > _grade_to_exe)
		throw Form::GradeTooLowException();
	if (_signed != 1)
		throw Form::NotSigned();
	
	std::cout << "VVVVVVVvRRRRrrrvvvvvvvvvvzZZZZ" << std::endl;
	srand((unsigned)time(0));
	if (rand() % 2)
		std::cout << _target << " was robotomized successfuly" << std::endl;
	else
		std::cout << _target << " was NOT robotomized successfuly" << std::endl;
}