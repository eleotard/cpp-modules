/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:58 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 19:02:09 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
	public:
		Weapon(void);
		~Weapon(void);
		std::string const	&getType() const;
		void				setType(std::string new_type);
	private:
		std::string _type;
};

#endif