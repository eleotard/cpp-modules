/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:54:56 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 19:11:22 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
//#include "Bureaucrat.hpp"

Form::Form() : _name("<unamed>"), _grade_to_sign(0), _grade_to_exe(0), _signed(false)
{
	std::cout << "Form defaut constructor called" << std::endl;
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_exe)
	: _name(name), _grade_to_sign(grade_to_sign), _grade_to_exe(grade_to_exe), _signed(false)
{
	std::cout << "Form " << _name << " constructor called" << std::endl;
	if (_grade_to_sign < 1 || _grade_to_exe < 1)
		throw Form::GradeTooHighException();
	else if (_grade_to_sign > 150 || _grade_to_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _grade_to_sign(copy._grade_to_sign),
	_grade_to_exe(copy._grade_to_exe), _signed(copy._signed)
{
	std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form " << _name << " destructor called." << "\n";
}

Form &Form::operator=(const Form &src)
{
	_signed = src._signed;
	return (*this);
}

/*GETS*/

const std::string	Form::getName() const
{
	return (_name);
}

int	Form::getGradeToSign() const
{
	return (_grade_to_sign);
}

int	Form::getGradeToExe() const
{
	return (_grade_to_exe);
}

bool	Form::getSigned() const
{
	return (_signed);
}

void		Form::beSigned(Bureaucrat const& bur)
{
	if (bur.getGrade() <= _grade_to_sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream & os, Form const& src)
{
	if (src.getSigned())
	{
		os << "Form " << "'" << src.getName() << "'" << " is signed." <<
			" Need grade " << src.getGradeToSign() << " to sign and "
				<< src.getGradeToExe() << " to execute." << std::endl;
	}
	else
	{
		os << "Form " << "'" << src.getName() << "'" << " is not signed." <<
			" Need grade " << src.getGradeToSign() << " to sign and "
				<< src.getGradeToExe() << " to execute." << std::endl;
	}
	return (os);
}