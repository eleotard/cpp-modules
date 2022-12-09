/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:52:20 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/09 13:03:36 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> test;

	test = mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << std::endl;
	mstack.pop();
	std::cout << "stack size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "------------------------" << std::endl;

	std::list<int> a;
	std::list<int> b;

	b = a;
	a.push_back(5);
	a.push_back(17);
	std::list<int>::iterator itte = --(a.end());
	std::cout << *(itte++) << std::endl;
	std::cout << std::endl;
	a.pop_back(); //vire le dernier element 
	std::cout << "stack size = " << a.size() << std::endl;
	a.push_back(3);
	a.push_back(5);
	a.push_back(737);
	//[...]
	a.push_back(0);
	std::list<int>::iterator itt = a.begin();
	++itt;
	--itt;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::list<int> m(a);
	return 0;
}