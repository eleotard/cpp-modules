/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:23:35 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 00:15:41 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("<unamed>"), _grade(150)
{
	std::cout << "Bureaucrat defaut constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat " << _name << " constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		_grade = grade;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << "\n";
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << "\n";
	}
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
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << "\n";
	}
	catch(const Bureaucrat::GradeTooLowException& e)
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

std::ostream &operator<<(std::ostream & os, Bureaucrat const& src)
{
	if (src.getGrade() <= 150 && src.getGrade() >= 1)
	{
		os << src.getName() << ", bureaucrat grade " << src.getGrade()
			<< "." << std::endl;
	}
	return (os);
}