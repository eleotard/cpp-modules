/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:36 by elsie             #+#    #+#             */
/*   Updated: 2022/10/23 19:04:24 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANA_H
# define HUMANA_H

class HumanA
{
	public:
		HumanA(void);
		~HumanA(void);
		void	attack();
	private:
		std::string	nameA;
		Weapon		WeaponA;
};

#endif