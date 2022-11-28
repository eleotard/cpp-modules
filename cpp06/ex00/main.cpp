/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:45:55 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/28 13:40:17 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <locale>
#include <sstream>
#include <float.h>
#include <limits.h>
#include <numbers>
#include <iomanip>
#include <cmath>

void	check_errors(std::string &str)
{
	std::size_t	find_pt;
	std::size_t	find_f;
	std::string::iterator	it;
	std::locale				loc;
	
	if (str.empty())
		throw std::exception();
	it = str.begin();
	while (it != str.end())
	{
		if (!std::isdigit(*it, loc) && *it != 'f' && *it != '.')
			throw std::exception();
		it++;
	}
	find_pt = str.find_first_of(".");
	if (find_pt != str.find_last_of(".") && find_pt != str.npos) //si ya plusieurs '.'
		throw std::exception();
	if (find_pt != str.npos && !isdigit(str[find_pt + 1]))
		throw std::exception();	
	if (str.length() > 1 && str[0] == '.') //si ya un point au debut
		throw std::exception();	
	find_f = str.find_first_of("f");
	if (find_f != str.find_last_of("f") && find_f != str.npos) //si ya plusieurs 'f'
		throw std::exception();
	if (find_f != str.npos && find_f != (str.length() - 1)) //si ya un f mais quil est pas a a fin
		throw std::exception();
}

//cast vers le double pck type le plus large

double	checker_str(std::string str)
{
	double	res;
	double	sign;
	
	res = 0;
	sign = 1;
	if (str == "inf" || str == "inff"
		|| str == "+inf" || str == "+inff")
		return (std::numeric_limits<double>::infinity());
	if (str == "-inf" || str == "-inff")
		return (-1 * std::numeric_limits<double>::infinity());
	if (str == "nan" || str == "nanf"
		|| str == "NaN" || str == "NaNf")
		return (std::numeric_limits<double>::signaling_NaN());
	if (str.length() == 1 && !isdigit(*(str.begin()))) //cest un caractere
		return (static_cast<double>(*(str.begin())));
	if (str[0] == '-')
	{
		str = str.c_str() + 1;
		sign = -1;
	}
	else if (str[0] == '+')
		str = str.c_str() + 1;
	check_errors(str);
	std::stringstream ss(str); 
	ss >> res;
	//std::cout << res << std::endl;
	return (sign * res);
	// att aux int overflow	
}

void	recreate_type(double res)
{
	/*CHAR*/
	if (isnan(res) || res > 127 || res < -128 || !isprint(res))
		std::cout << "char:\tImpossible" << std::endl;
	else
		std::cout << "char:\t" << static_cast<char>(res) << std::endl;
		
	
	/*INT*/
	if (res > static_cast<double>(INT_MAX)
		|| res < static_cast<double>(INT_MIN))
		std::cout << "int:\t Overflow" << std::endl;
	else if (isnan(res) || res == std::numeric_limits<double>::infinity()
		|| res == (std::numeric_limits<double>::infinity() * -1))
		std::cout << "int:\tImpossible" <<std::endl;
	else
		std::cout << "int:\t" << static_cast<int>(res) <<std::endl;
	
	/*FLOAT*/
	float tmp = static_cast<float>(res); 
	std::cout << "float:\t" << std::fixed << std::showpoint;
    std::cout << std::setprecision(1) << tmp << 'f' << std::endl;
	/*DOUBLE*/
	std::cout << "double:\t" << res << std::endl;

}

int main(int argc, char **argv)
{
	int	i;
	double res;
	
	if (argc <= 1)
	{
		std::cerr << "No argument entered" << std::endl;
		return (1);
	}
	i = 1;
	while (argv[i])
	{
		try
		{
			res = checker_str(argv[i]);
			recreate_type(res);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		if (argv[i + 1])
		{
			std::cout << std::endl;
			std::cout << std::endl;		
		}
		i++;
	}
	return (0);
}