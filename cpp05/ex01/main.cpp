/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:18 by elsie             #+#    #+#             */
/*   Updated: 2022/11/23 14:47:16 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

int main()
{
	std::cout << "\033[33m"; //jaune
	try
	{
		Bureaucrat rand;
		std::cout << rand;
		Form a("entree", 2, 1);
		std::cout << a;
		rand.signedForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n";
	std::cout << "\033[35m"; //violet
	try
	{
		Form b("erreur", 8, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n";
	std::cout << "\033[32m"; //vert
	
	try
	{
		Bureaucrat i("nathan", 2);
		std::cout << i;
		Form c("essai", 9, 8);
		std::cout << c;
		i.signedForm(c);
		std::cout << c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << "\033[33m"; //jaune
	std::cout << "\n";
}