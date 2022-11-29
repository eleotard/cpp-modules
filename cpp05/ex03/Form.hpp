/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:55:17 by elsie             #+#    #+#             */
/*   Updated: 2022/11/29 19:09:48 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
		
		class NotSigned : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form cannot be executed bc it's not signed");
				}
		};
	
		Form();
		Form(const std::string &name, int grade_to_sign, int grade_to_exe);
		Form(const Form &copy);
		virtual ~Form();
		Form	&operator=(const Form &src);
		/*ACCESSORS*/
		const std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExe() const;
		bool		getSigned() const;

		void			beSigned(Bureaucrat const& bur);
		virtual std::string const& getTarget() const = 0;
		virtual void	execute(Bureaucrat const& B) const = 0;
		
	protected:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_exe;
		bool				_signed;
		
};

std::ostream &operator<<( std::ostream & os, Form const& i);

#endif