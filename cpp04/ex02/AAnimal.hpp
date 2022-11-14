/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:15 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:28:50 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

//INTERFACE
// - attributs interdits
// - tout = 0
//interface pour utiliser des objets derives

class AAnimal
{
	public :
		AAnimal();
		AAnimal(std::string name);
		AAnimal(const AAnimal &src);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &src);
		virtual void				setType(const std::string &type);
		virtual std::string const	&getType() const;
		virtual void		makeSound() const = 0;
	protected:
		std::string	_type;
};

#endif