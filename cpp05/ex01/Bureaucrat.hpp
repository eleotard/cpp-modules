/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:23:31 by elsie             #+#    #+#             */
/*   Updated: 2022/11/23 14:02:00 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;

class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade too low");
				}
		};
		
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &src);
		void		promote();
		void		demote();
		
		void		signedForm(Form &form);
		/*ACCESSORS*/
		void 		setGrade(int grade);
		int			getGrade() const;
		const std::string	getName() const;
		
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<( std::ostream & os, Bureaucrat const& i);

#endif