/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:48:36 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/09 12:42:52 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <exception>

class Span
{
	public:
		class FullArray : public std::exception
		{
			const char* what() const throw()
			{
				return ("Error: Can not add another member, the array is full");
			} 	
		};
		class NoMembers : public std::exception
		{
			const char* what() const throw()
			{
				return ("Error: No members in the array");
			} 	
		};
		class OneMember : public std::exception
		{
			const char* what() const throw()
			{
				return ("Error: Only one member in the array");
			} 	
		};
		Span(unsigned int N);
		Span(Span const& copy);
		Span &operator=(Span const& src);
		~Span();
		void	testSize() const;
		void	printVect();
		void	addNumber(int nb);
		template <typename inputIt> //type used for input iterators(read the values from a container)
		void	addNumber(inputIt begin, inputIt end)
		{
			for (int i = 0; i != end - begin; i++) //donne la difference entre leurs index
				addNumber(*(begin + i));
		};
		int		shortestSpan();
		int		longestSpan();
	private:
		Span();
		std::vector<int> _vect;
		unsigned int _N; //classe qui peut stocker un maximum de N entiers
};


#endif