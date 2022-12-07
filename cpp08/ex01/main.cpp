/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:47:50 by eleotard          #+#    #+#             */
/*   Updated: 2022/12/07 20:19:26 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include "Span.hpp"

	// std::cout << "\033[34m"; //bleu
	// std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

void	no_members()
{
	Span sp = Span(5);
	sp.printVect();
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout  << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	one_member()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.printVect();
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout  << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	full_array()
{
	Span sp = Span(5);
	/*ADD*/
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(1);
	sp.printVect();
	
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	small_array()
{
	Span sp = Span(5);
	/*ADD*/
	sp.addNumber(9);
	sp.addNumber(34);
	sp.addNumber(6);
	sp.addNumber(456);
	sp.addNumber(19856);
	sp.printVect();
	
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	big_array()
{
	Span sp = Span(15000);
	
	for (int i = 0; i < 15000; i++)
		sp.addNumber(rand());
	std::cout << "Do you want to print the array of 15000 members ?" << std::endl;
	//sp.printVect();
	
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	spec_array()
{
	//prendre d'un truc et mettre tout dedans 
	//du coup utiliser les iterateurs du truc que l'on veut inserer
	Span sp = Span(10);
	
	int arr[] = {102, 105, 76, 1800, 5094};
	int	arr_size = sizeof(arr) / sizeof(arr[0]);
	sp.addNumber(&arr[0], &arr[arr_size]); //car l'iterateur de fin vient apres le dernier element
	sp.printVect();
	
	/*SHORTEST*/
	try
	{
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	/*LONGEST*/
	try
	{
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	srand(time(0) * getpid());
	std::cout << "\033[00m" << "NO MEMBERS:" << "\033[34m" << std::endl;
	no_members();
	std::cout << std::endl << "\033[00m"  << "ONE MEMBER:" << "\033[35m" << std::endl; 
	one_member();
	std::cout << std::endl << "\033[00m"  << "FULL ARRAY EXCEPTION:" << "\033[36m" << std::endl;
	full_array();
	std::cout << std::endl << "\033[00m"  << "SMALL ARRAY:" << "\033[33m" << std::endl;
	small_array();
	std::cout << std::endl << "\033[00m"  << "BIG ARRAY:" << "\033[32m" << std::endl;
	big_array();
	std::cout << std::endl << "\033[00m"  << "BIG ARRAY WITH SPEC. FT:" << "\033[31m" << std::endl;
	spec_array();
	return (0);
}