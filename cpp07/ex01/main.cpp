/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:42:05 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/02 22:23:22 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Data.hpp"

int	main(void)
{
	/*INT ARRAY*/
	int int_tab[5] = {54, 69, 4, 7, 6};
	iter(int_tab, 5, &printcpp);
	std::cout << std::endl;

	/*DOUBLE ARRAY*/
	double double_tab[5] = {54.545, 69.545, 4.44, 7.6, 6.47};
	iter(double_tab, 5, &printcpp);
	std::cout << std::endl;

	/*STRING ARRAY*/
	std::string strtab[5] = {"mais", "ou", "est", "donc", "or"};
	iter(strtab, 5, &printcpp);
	std::cout << std::endl;

	/*CLASS ARRAY*/
	int i;
	Data data_tab[4];
	std::string str_tab[4] = {"hello", "bjr", "salut", "cava"};

	i = 0;
	while (i < 4)
	{
		data_tab[i] = Data(str_tab[i]);
		i++;
	}
	iter(data_tab, 4, &printcpp);
	std::cout << std::endl;
	
	return (0);
}