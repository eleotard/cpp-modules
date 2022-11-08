/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:50:25 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 00:23:49 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &rhs);
		void attack(const std::string& target);
		//cible: -autant de ptn de vie ke attak damage()
		//CT - 1 energie
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		//+autant de ptn de vie que amount
		//- 1 energie
	private:
		std::string		_name;
		unsigned int	_hit_points; //pts de vie
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif