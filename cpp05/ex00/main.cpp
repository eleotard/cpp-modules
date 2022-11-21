/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:18 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 00:17:39 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

int main()
{
    std::cout << "\033[33m"; //jaune
    Bureaucrat a("jose le boss", 1);
    Bureaucrat b("mimi le second", 2);
    Bureaucrat c("jo limposteur", 153);
    Bureaucrat d("le complice de jo", -3);
    Bureaucrat e;
    Bureaucrat f;

    std::cout << "\033[34m"; //bleu
    std::cout << "\n";
    std::cout << a;
    std::cout << b;
    std::cout << c;
    std::cout << d;
    std::cout << e;
    f = b;
    std::cout << f;
    std::cout << "\n";

    a.setGrade(2);
    b.setGrade(1);
    std::cout << a;
    std::cout << b;
    std::cout << e;
    std::cout << f;
    b.promote();
    a.demote();
    std::cout << b;
    std::cout << a;
    std::cout << "\n";
    
    
    std::cout << "\033[33m"; //jaune
    return (0);
    
}