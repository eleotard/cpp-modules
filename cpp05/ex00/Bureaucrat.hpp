/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:23:31 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 15:52:20 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &src);
		void		promote();
		void		demote();
		/*ACCESSORS*/
		void 		setGrade(int grade);
		int			getGrade() const;
		const std::string	getName() const;
		
		/*EXCEPTIONS*/
		//pas de forme canonique de coplien obligatoire
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
		
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<( std::ostream & os, Bureaucrat const& i);

#endif