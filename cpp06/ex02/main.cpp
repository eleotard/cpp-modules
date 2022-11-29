/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:39:16 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/29 22:10:28 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include <exception>
#include <typeinfo>
#include <cstdlib>
#include <unistd.h>
#include "Base.hpp"

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void)
{
	Base	*base;
	int		res;
	static bool isinit = false;
	
	if (!isinit) {
		srand((unsigned)time(0) * getpid());
		isinit = true; 
	}
	res = rand() % 3;
	if (res == 0) { 
		std::cout << "at generation: \tp is a class A" << std::endl;
		base = new A;
	}
	else if (res == 1) {
		std::cout << "at generation: \tp is a class B" << std::endl;
		base = new B;
	}
	else {
		std::cout << "at generation: \tp is a class C" << std::endl;
		base = new C;
	}
	return (base);
}

void identify(Base* p)
{
	A *testa = dynamic_cast<A *>(p);
	if (testa)
	{
		std::cout << "pointeur ft: \tp is a class A" << std::endl;
		return ;
	}
	(void)testa;

	B *testb = dynamic_cast<B *>(p);
	if (testb)
	{
		std::cout << "pointeur ft: \tp is a class B" << std::endl;
		return ;
	}
	(void)testb;

	C *testc = dynamic_cast<C *>(p);
	if (testc)
		std::cout << "pointeur ft: \tp is a class C" << std::endl;
	(void)testc;
}

void	identify(Base &p)
{
	try
	{
		A &testa = dynamic_cast<A&>(p);
		(void)testa; //obligee de mettre ca car au cas ou cest NULL
		//une reference ne peut jamais etre null
		//donc on dit au compilateur de l'ignorer si cest le cas
		std::cout << "reference ft: \tp is a class A" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}
	try
	{
		B &testb = dynamic_cast<B&>(p);
		(void)testb;
		std::cout << "reference ft: \tp is a class B" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}
	try
	{
		C &testc = dynamic_cast<C&>(p);
		(void)testc;
		std::cout << "reference ft: \tp is a class C" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}
}

int main(void)
{
	Base *random;

	random = generate();
	identify(random);
	identify(*random);
	delete random;
	
	return (0);
}