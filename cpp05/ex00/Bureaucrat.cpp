/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:23:35 by elsie             #+#    #+#             */
/*   Updated: 2022/11/21 23:39:10 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("<unamed>")
{
	std::cout << "Bureaucrat defaut constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat " << _name << " constructor called" << std::endl;
	try
	{
		if (grade < 1 || grade > 150)
			throw std::exception();
		_grade = grade;
	}
	catch(const std::exception& e)
	{
		if (grade < 1)
			std::cerr << "Bureaucrat::GradeTooHighException." << '\n';
		else if (grade > 150)
			std::cerr << "Bureaucrat::GradeTooLowException." << '\n';
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
	*this = copy;
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

Bureaucrat &Bureaucrat::operator++()
{
	try
	{
		if (_grade - 1 < 1)
			throw std::exception();
		_grade = _grade - 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat::GradeTooHighException." << '\n';
	}
	return (*this);
}

Bureaucrat &Bureaucrat::operator--()
{
	try
	{
		if (_grade + 1 > 150)
			throw std::exception();
		_grade = _grade + 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat::GradeTooLowException." << '\n';
	}
	return (*this);
}


void	Bureaucrat::setGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		_grade = grade;
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
	if (src.getGrade() < 150 && src.getGrade() >= 1)
	{
		os << src.getName() << ", bureaucrat grade " << src.getGrade()
			<< "." << std::endl;
	}
	return (os);
}