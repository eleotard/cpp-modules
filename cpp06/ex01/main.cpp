/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:39:16 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/02 17:32:28 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

//reinterpret cast
//demande juste de le considerer comme un autre type sans changer les bits
//uintptr_t: type entier non signe qui peut stocker les pointeurs les plus grands possibles
//sur le systeme
//un type entier non signé avec la propriété que tout pointeur valide vers void 
//peut être converti en ce type, puis reconverti en pointeur vers void, et le résultat 
//sera comparé égal au pointeur d'origine".

uintptr_t	serialize(Data *ptr)
{
	uintptr_t oui;
	
	oui = reinterpret_cast<uintptr_t>(ptr);
	return (oui);
}

Data* deserialize(uintptr_t raw)
{
	Data *b;
	
	b = reinterpret_cast<Data *>(raw);
	return (b);
}

int main(void)
{
	Data a;
	Data *b;
	uintptr_t tmp;
	
	a.setStr("helo");
	std::cout << a.getStr() << std::endl;
	tmp = serialize(&a);
	b = deserialize(tmp);
	std::cout << b->getStr() << std::endl;
	
	return (0);
}