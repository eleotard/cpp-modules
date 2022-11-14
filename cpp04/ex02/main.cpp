/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:18 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:35:42 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

	// std::cout << "\033[34m"; //bleu
	//std::cout << "\033[32m"; //vert
	// std::cout << "\033[35m"; //violet
	// std::cout << "\033[33m"; //jaune

int main(void)
{
	std::cout << "\033[33m"; //jaune
	int		i;	
	const	AAnimal *tab[6];
	
	tab[0] = new Cat();
	tab[1] = new Cat();
	tab[2] = new Cat();
	tab[3] = new Dog();
	tab[4] = new Dog();
	tab[5] = new Dog();
	
	std::cout << std::endl << "\033[32m"; //vert
	i = -1;
	while (++i < 6)
		std::cout << tab[i]->getType() << std::endl;
	
	std::cout << std::endl << "\033[35m"; //violet
	i = -1;
	while (++i < 6)
		tab[i]->makeSound();
		
	std::cout << std::endl<< "\033[34m"; //bleu

	i = -1;
	while (++i < 6)
		delete(tab[i]);
	std::cout << "\033[33m" << std::endl; //jaune
	
	Dog d;
	{
		Dog tmp = d;
	}
	std::cout << std::endl << "\033[35m"; //violet
	
	Cat *catptr = new Cat();
	Cat b(*catptr);
	
	delete catptr;
	std::cout << std::endl << "\033[34m"; //bleu
	return (0);
}