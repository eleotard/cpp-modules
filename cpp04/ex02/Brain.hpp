/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:05:05 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 14:54:19 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(std::string name);
		Brain(const Brain &src);
		virtual ~Brain();
		Brain &operator=(const Brain &src);
	
	private:
		std::string	_ideas[100];
};

#endif