/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:58:38 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:28:08 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
	public :
		Dog();
		Dog(std::string name);
		Dog(const Dog &src);
		virtual ~Dog();
		Dog &operator=(const Dog &src);
		virtual void	makeSound() const;
	private:
		Brain *_dog_brain;
};

#endif