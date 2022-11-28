/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:23:35 by elsie             #+#    #+#             */
/*   Updated: 2022/11/23 19:24:35 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("<unamed>"), _grade(150)
{
	std::cout << "Bureaucrat defaut constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat " << _name << " constructor called" << std::endl;

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(); //apelle le constructeur par defaut de la classe Grade..
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destructor called." << "\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

void	Bureaucrat::promote()
{
	setGrade(_grade - 1);
}

void	Bureaucrat::demote()
{
	setGrade(_grade + 1);
}


void	Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}

const std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::signedForm(Form &form)
{	
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << _name << " signed form" << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat " << _name << " couldn't sign form" << form.getName() 
			<< "because of his " << e.what() << "\n";
	}
}

void		Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
}


std::ostream &operator<<(std::ostream & os, Bureaucrat const& src)
{
	if (src.getGrade() <= 150 && src.getGrade() >= 1)
	{
		os << src.getName() << ", bureaucrat grade " << src.getGrade()
			<< "." << std::endl;
	}
	return (os);
}