/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:50:25 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 19:53:59 by elsie            ###   ########.fr       */
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

		/*ACTIONS*/
		void attack(const std::string& target);
		//cible: -autant de ptn de vie ke attak damage()
		//CT - 1 energie
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//+autant de ptn de vie que amount
		//- 1 energie
		
		/*ACCESSORS*/
		std::string		getName() const;
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		
		/*SET*/
		void	setName(std::string name);
		void	setHitPoints(unsigned int hit_points);
		void	setEnergyPoints(unsigned int energy_points);
		void	setAttackDamage(unsigned int attack_damage);

	protected: //ACCESSIBLE pour les derives et la base
		std::string		_name;
		unsigned int	_hit_points; //pts de vie
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif