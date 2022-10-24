/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:58 by elsie             #+#    #+#             */
/*   Updated: 2022/10/24 15:34:24 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);
		std::string const	&getType() const;
		void				setType(std::string new_type);
	private:
		std::string _type;
};

#endif