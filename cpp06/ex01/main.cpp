/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:39:16 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/25 22:00:30 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"


Data* deserialize(uintptr_t raw)
{
	Data *b;
	
	b = reinterpret_cast<Data *>(raw);
	return (b);
}

uintptr_t	serialize(Data *ptr)
{
	uintptr_t oui;
	
	oui = reinterpret_cast<uintptr_t>(ptr);
	return (oui);
}

int main(void)
{
	Data a;
	Data *b;
	uintptr_t tmp;
	
	a.setStr("helo");
	std::cout << a.getStr() << std::endl;
	tmp = serialize(&a);
	std::cout << tmp << std::endl;
	b = deserialize(tmp);
	std::cout << b->getStr() << std::endl;
	
	return (0);
}