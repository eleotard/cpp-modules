/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:07:31 by elsie             #+#    #+#             */
/*   Updated: 2022/11/29 23:39:47 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const& src);
		virtual std::string const& getTarget() const;
		void	execute(Bureaucrat const& B) const;
	private:
		RobotomyRequestForm();
		std::string _target;
};

#endif