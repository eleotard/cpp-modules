/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:01:19 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/18 16:43:48 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
	public :
		Cat();
		Cat(std::string name);
		 Cat(const Cat &src);
		virtual ~Cat();
		Cat &operator=(const Cat &src);
		virtual void				makeSound() const;
	private:
		Brain *_cat_brain;
};

#endif