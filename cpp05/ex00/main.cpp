/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:18 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 13:29:18 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

void    create_first()
{
    Bureaucrat a("jo le boss", 1);
    std::cout << a;
    a.promote();
    std::cout << a;
}

void    create_second()
{
    std::cout << "\033[34m"; //bleu
    Bureaucrat b("mimi le second", 2);
    std::cout << b;
    b.promote();
    std::cout << b;
    b.promote();
    std::cout << b;
}

void    create_random()
{
    std::cout << "\033[32m"; //vert
    Bureaucrat c;
    std::cout << c;
    c.demote();
}

void    create_wrong()
{
    std::cout << "\033[35m"; //violet
    Bureaucrat d("philou l'imposteur", 156);
    std::cout << d;
}


int main()
{
    std::cout << "\033[33m"; //jaune
 
    try
    {
        create_first();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n";
    
    try
    {
        create_second();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n";
    
    try
    {
        create_random();       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n";
    
    try
    {
        create_wrong();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\033[33m"; //jaune
    return (0);
    
}