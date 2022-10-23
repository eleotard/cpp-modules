/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:42 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 19:04:18 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{
	public:
		HumanB(void);
		~HumanB(void);
		void	attack();
	private:
	std::string	nameB;
	Weapon		WeaponB;
};

#endif