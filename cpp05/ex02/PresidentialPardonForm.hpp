/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:08:16 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 20:41:42 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const& src);
	
		void	ppf_duty(Bureaucrat const& B) const;
	private:
		std::string _target;
};

#endif