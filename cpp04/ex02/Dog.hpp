/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:58:38 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/18 17:31:08 by elsie            ###   ########.fr       */
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
		Dog(const std::string &name);
		Dog(const Dog &src);
		virtual ~Dog();
		Dog &operator=(const Dog &src);
		virtual void	makeSound() const;
	private:
		Brain *_dog_brain;
};

#endif