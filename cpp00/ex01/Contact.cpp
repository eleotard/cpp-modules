/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:01 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/13 20:37:31 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) //dans la classe Contact je choisis la fonction Contact
{
	std::cout << "Constructor called" << std::endl;
	return ; //les constructeurs et destructeurs nont pas de type de retour, ce sont des procedures
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}