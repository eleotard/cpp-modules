/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:15 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/18 16:41:13 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(const std::string &name);
		Animal(const Animal &src);
		virtual ~Animal();
		Animal &operator=(const Animal &src);
		void				setType(const std::string &type);
		std::string const	&getType() const;
		virtual void		makeSound() const;
		
	protected :
		std::string	_type;
};

#endif