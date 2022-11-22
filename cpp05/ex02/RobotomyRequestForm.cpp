/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:07:28 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 20:41:37 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm infos constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::rrf_duty(Bureaucrat const& B) const
{
	if (B.getGrade() > _grade_to_exe)
		throw Form::GradeTooLowException();
	
	std::cout << "VVVVVVVvRRRRrrrvvvvvvvvvvzZZZZ" << std::endl;
	
	int rand = std::rand();
	if (rand % 2 == 0)
		std::cout << _target << " was robotomized successfuly" << std::endl;
	else
		std::cout << _target << " was NOT robotomized successfuly" << std::endl;
}