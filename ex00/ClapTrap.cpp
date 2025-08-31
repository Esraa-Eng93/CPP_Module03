/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 21:30:54 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

 ClapTrap::ClapTrap()
 {
	std::cout << "Default Constructor is Called" << std::endl;
 }
 
ClapTrap::ClapTrap(std::string entering_name) : name(entering_name), hit_points(10), Energy_points(10), attack_damage(0)
{
	std::cout << "Parametric Constructor is Called" << std::endl;
}	
	
ClapTrap::ClapTrap(const ClapTrap& last_obj)
{
	std::cout << "Default Copy Constructor is Called" << std::endl;
	*this = last_obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& last_obj)
{
	std::cout << "Default Copy Assigment is Called" << std::endl;
	if (this == &last_obj)
		return (*this);
	name = last_obj.name;
	Energy_points = last_obj.Energy_points;
	hit_points = last_obj.hit_points;
	attack_damage = last_obj.attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points  <=  0 || Energy_points <= 0)
	{
		std::cout << "ClapTrap " << name << " Can't attacks " << std::endl;
		return;
	}
	Energy_points--;
	std::cout << "ClapTrap " << name << " attacks " << target <<", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hit_points = hit_points - amount ;
	std::cout << "ClapTrap " << name << " takes " << amount <<" damage, now has " << hit_points << " HP left." << std::endl;
	if (hit_points < 0)
	{
		std::cout<< "ClapTrap " << name << " has died." << std::endl;
		hit_points = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0 || Energy_points <= 0) 
	{
        std::cout << "ClapTrap " << name << " cannot repair!" << std::endl;
        return;
	}
	hit_points = hit_points + amount ;
	Energy_points--;
	std::cout << "ClapTrap " << name << " is repaired by " << amount << ", now has " << hit_points << " HP" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Destructor is Called" << std::endl;
}

void ClapTrap::set_name(std::string name)
{
	this->name = name;
}

void ClapTrap::set_hit_points(int hp)
{
	hit_points = hp;
}

void ClapTrap::set_energy_points(int ep)
{
	Energy_points = ep;
}

void ClapTrap::set_attack_damage(int ad)
{
	attack_damage = ad;
}

std::string ClapTrap::get_name() const
{
	return (name);
}

int ClapTrap::get_energy_points() const
{
	return (Energy_points);
}

int ClapTrap::get_hit_points() const
{
	return (hit_points);
}

int ClapTrap::get_attack_damage() const
{
	return (attack_damage);
}
