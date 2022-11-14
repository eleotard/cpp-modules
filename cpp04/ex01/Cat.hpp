/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:01:19 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 15:01:40 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	public :
		Cat();
		Cat(std::string name);
		 Cat(const Cat &src);
		virtual ~Cat();
		Cat &operator=(const Cat &src);
		virtual void	makeSound() const;
	private:
		Brain *_cat_brain;
};

#endif