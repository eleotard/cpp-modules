/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:35:57 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/29 20:12:40 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Intern
{
	public:
		class BadNameException : public std::exception
		{
			public:
			virtual const char* what(void) const throw()
			{
				return("Intern could not create the form : bad formular name.");
			}
		};
		
		Intern();
		Intern(Intern const& copy);
		~Intern();
		Intern	&operator=(Intern const& src);
		Form	*makeForm(std::string form_name, std::string target);
		
		Form	*getPresidentialPardonForm(std::string target);
		Form	*getRobotomyRequestForm(std::string target);
		Form	*getShrubberyCreationForm(std::string target);
};

#endif