/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:45:55 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/25 18:19:19 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cerr << "No argument entered" << std::endl;
	if (argv[1][0] == '\0')
		std::cerr << "Empty argument";
	

	
	return (0);
}