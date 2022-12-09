/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:01:39 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/08 20:16:59 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>() { 
		return ;
	}
	MutantStack(MutantStack const& copy)
	: std::stack<T>(copy) {
	}
	~MutantStack(){
		return ;
	}
	MutantStack	&operator=(MutantStack const& src) {
		std::stack<T>::operator=(src);
		return (*this);
	}
	typedef typename std::stack<T>::container_type::iterator iterator; //typedef d'un typedef
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_reverse_iterator;
	/*:: est la portée du type. C'est un peu comme "est dans", donc iterator
	"est dans" _MyBase.
	
	typename ici permet au compilateur de savoir
	que iterator est un type et non d'un membre statique de deque.*/
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const_iterator cbegin() const
	{
		return (this->c.begin()); //va chercher la bonne ft aui renvoie un const
	}
	const_iterator cend() const
	{
		return (this->c.end());
	}
	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}
	const_reverse_iterator crbegin() const
	{
		return (this->c.rbegin()); //va chercher celle qui est const
	}
	const_reverse_iterator crend() const
	{
		return (this->c.rend());
	}
	
	
};


#endif