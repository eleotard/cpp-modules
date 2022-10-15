/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:59:03 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/14 16:14:46 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main(int argc, char **argv)
{
    int i(1);
    int j(0);
    std::locale loc;
    
	if (argc == 1)
		return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    while (argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            std::cout << std::toupper(argv[i][j], loc);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
	return (0);
}