/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:37:18 by eleotard          #+#    #+#             */
/*   Updated: 2022/11/14 16:51:05 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "\033[33m"; //jaune
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* m = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	const WrongCat* y = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[34m"; //bleu
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	x->makeSound();
	m->makeSound();
	y->makeSound();
	
	std::cout << std::endl;
	std::cout << "\033[33m"; //jaune
	delete(meta);
	delete(j);
	delete(i);
	delete(x);
	delete(y);
	delete(m);
	return (0);
}