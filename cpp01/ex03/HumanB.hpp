/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:42 by elsie             #+#    #+#             */
/*   Updated: 2022/10/24 16:23:44 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);
		void	setWeapon(Weapon &weapon);
		void	attack() const;
	private:
	std::string	_name;
	Weapon		*_Weapon;
};

#endif