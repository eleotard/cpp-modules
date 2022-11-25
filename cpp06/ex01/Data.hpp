/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:26:47 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/25 21:57:20 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Data
{
	public :
		Data();
		Data(Data const& src);
		~Data();
		Data &operator=(Data const& src);
		void	setStr(std::string const& str);
		const std::string &getStr() const;
	private:
		std::string _str;
};