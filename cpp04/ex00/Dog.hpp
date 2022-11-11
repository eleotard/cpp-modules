/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:58:38 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/11 01:05:28 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public :
		Dog();
		Dog(std::string name);
		Dog(const Dog &src);
		virtual ~Dog();
		Dog &operator=(const Dog &src);
		virtual void	makeSound() const;
};

#endif