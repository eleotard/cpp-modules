/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:37:18 by elsie             #+#    #+#             */
/*   Updated: 2022/11/22 17:14:44 by elsie            ###   ########.fr       */
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
    Bureaucrat rand;
    Form a("entree", 2, 1);

    //rand.signedForm(a);
    std::cout << a; 
}