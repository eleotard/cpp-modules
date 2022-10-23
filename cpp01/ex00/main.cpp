/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:19:06 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/22 20:13:54 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie stack_zombie("Stack Zombie");
    Zombie *heap_zombie = newZombie("Heap Zombie");

    randomChump("RandomChump Zombie");
    delete(heap_zombie);
    return (0);
}
