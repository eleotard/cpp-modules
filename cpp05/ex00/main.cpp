/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:18 by elsie             #+#    #+#             */
/*   Updated: 2022/11/21 23:38:20 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <vector>
using namespace std; 

int main()
{
    Bureaucrat a("jose le boss", 1);
    Bureaucrat b("mimi le second", 2);
    Bureaucrat c("jo limposteur", 153);
    Bureaucrat d("le complice de jo", -3);

    std::cout << "\n";
    std::cout << a;
    std::cout << b;
    std::cout << c;
    std::cout << d;
    std::cout << "\n";

    a.setGrade(2);
    b.setGrade(1);
    std::cout << a;
    std::cout << b;
    std::cout << "\n";
    
    
}