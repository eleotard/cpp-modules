/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:13:05 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/01 18:57:31 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
T max(T const& a, T const& b)
{
	if (a > b)
		return (a);
	return (b);
}

template<typename T>
T min(T const& a, T const& b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
void	swap(T a, T b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

#endif