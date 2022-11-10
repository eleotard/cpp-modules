/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:42 by elsie             #+#    #+#             */
/*   Updated: 2022/11/09 15:26:28 by eleotard         ###   ########.fr       */
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