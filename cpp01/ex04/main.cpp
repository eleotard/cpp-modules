/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:42:15 by elsie             #+#    #+#             */
/*   Updated: 2022/10/25 16:17:54 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
		return (std::cout << "Invalid args" << std::endl, 1);
	
	std::string		temp;
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open())
		return (std::cout << "Could not open the input file" << std::endl, 2);
		
	std::string		replace_file_name((std::string)argv[1] + ".replace");
	std::ofstream	ofs(replace_file_name.c_str(), std::ios::app);
	if (!ofs.is_open()) 
		return (std::cout << "Could not open the output file" << std::endl, 3);
		
	int	find_pos;
	find_pos = 0;
	while (std::getline(ifs, temp))
	{
		find_pos = 0;
		while (find_pos != -1)
		{
			find_pos = temp.find(s1, find_pos);
			if (find_pos != -1)
			{
				temp.erase(find_pos, s1.length());
				temp.insert(find_pos, s2);
			}
		}
		ofs << temp << std::endl;
	}
}