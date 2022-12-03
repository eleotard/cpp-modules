/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:26:47 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/02 22:20:53 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	public:
		Data();
		Data(std::string const& str);
		Data(Data const& src);
		~Data();
		Data &operator=(Data const& src);
		void	setStr(std::string const& str);
		const std::string &getStr() const;
	private:
		std::string _str;
};

std::ostream &operator<<(std::ostream  & os, Data const& src);


#endif