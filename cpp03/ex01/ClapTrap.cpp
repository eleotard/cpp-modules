/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsie <elsie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:53:40 by elsie             #+#    #+#             */
/*   Updated: 2022/11/08 21:36:34 by elsie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructed ClapTrap by default" << std::endl;
	_name = "unnamed";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructed ClapTrap " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	_name = src.getName() + " copy";
	std::cout << "Constructed ClapTrap " << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of Claptrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_attack_damage = rhs.getAttackDamage();

	return (*this);
}

/*ACCESSORS*/
/*GET*/

std::string		ClapTrap::getName() const
{
	return(this->_name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}
unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return(this->_attack_damage);
}

/*SET*/

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hit_points)
{
	_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	_attack_damage = attack_damage;
}

/*ACTIONS*/

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 &&_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target <<
			", causing " << _attack_damage << " points of damage!" << std::endl;
		//appeler la ft take damage pour lautre robot mais cmt
		_energy_points--;
		std::cout << "Energy points left : " << _energy_points << std::endl;
		std::cout << std::endl;
	}
	else if (_energy_points == 0)
		std::cout << "ClapTrap " << _name << " has no energy left to attack." << std::endl;
	else if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't attack bc he's dead." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points != 0)
	{
		this->_hit_points = _hit_points - amount;
		std::cout << "ClapTrap " << _name << " takes " << amount <<
			" points of damage!" " Number of lives remaining: " 
				<< _hit_points << std::endl;
		std::cout << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " cannot take damage anymore"
			<< " because he's already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 &&_hit_points > 0)
	{
		this->_hit_points = _hit_points + amount;
		std::cout << "ClapTrap " << _name << " gained back " << amount <<
			" points of life" << std::endl << "Number of lives remaining: "
				<< _hit_points << std::endl;
		std::cout << std::endl;
		_energy_points--;
		std::cout << "Life points left : " << _hit_points << std::endl;
		std::cout << "Energy points left : " << _energy_points << std::endl;
	}
	else if (_energy_points == 0)
		std::cout << "ClapTrap " << _name << " has no more energy to be repaired." << std::endl;
	else if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't be repaired bc he's dead." << std::endl;
	
}
