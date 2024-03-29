/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:28:48 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:44:14 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongCat &src);
		virtual ~WrongCat();
		WrongCat &operator=(const WrongCat &src);
		void	makeSound() const;
};

#endif