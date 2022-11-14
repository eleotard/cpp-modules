/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:15 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:48:16 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		virtual ~Animal();
		Animal &operator=(const Animal &src);
		void				setType(const std::string &type);
		std::string const	&getType() const;
		virtual void		makeSound() const; // ft membre virtuelle appele une METHODE: resolution dynamique
		
	protected :
		std::string	_type;
};

#endif