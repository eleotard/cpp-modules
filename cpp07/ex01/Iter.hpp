/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:41:45 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/02 20:49:18 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, unsigned int size, void (*f)(T const& a))
{
	unsigned int	i;

	if (!array)
		return ;
	i = 0;
	while (i < size)
	{
		(*f)(array[i]);
		i++;
	}
}

template<typename T>
void	printcpp(T const& a)
{
	std::cout << a << std::endl;
}

#endif