/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:35:37 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/29 20:13:21 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

Intern::Intern()
{
	std::cout << "Constructed Intern" << std::endl;
	return ;
}

Intern::Intern(Intern const& copy)
{
	(void)copy;
	std::cout << "Constructed copy Intern" << std::endl;
	return ;
}

Intern::~Intern()
{
	std::cout << "Destructed Intern" << std::endl;
	return ;
}

Intern	&Intern::operator=(__attribute__((unused)) Intern const& src)
{
	return (*this);
}

Form	*Intern::makeForm(std::string form_name, std::string target)
{
	Form 		*form;
	int			i;
	std::string forms[3] =
	{"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	Form *(Intern::*f[3])(std::string target) =
	{&Intern::getPresidentialPardonForm, &Intern::getRobotomyRequestForm,
	&Intern::getShrubberyCreationForm};

	i = 0;
	while (i < 3)
	{
		if (form_name == forms[i])
		{
			form = (this->*f[i])(target);
			std::cout << "\033[0m" << "Intern creates " << form_name
				<< "." << std::endl;
			return (form);
		}
		i++;
	}
	throw BadNameException();
}

Form *Intern::getPresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::getRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::getShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}