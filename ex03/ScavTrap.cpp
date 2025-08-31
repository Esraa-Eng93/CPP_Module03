/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 19:39:38 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << " ScavTrap Defult Constructor is called"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << " ScavTrap parametric Constructor is called"<< std::endl;
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_attack_damage(20);
}

ScavTrap::ScavTrap(const ScavTrap& old_obj): ClapTrap(old_obj)
{
	std::cout << " ScavTrap Copy Constructor is called"<< std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& old_obj)
{
	std::cout << " ScavTrap Copy Asignemt Operator is called"<< std::endl;
	if(this == &old_obj)
		return (*this);
	ClapTrap::operator=(old_obj);
	return (*this);
	//set_name(old_obj.get_name());
}

ScavTrap::~ScavTrap()
{
	std::cout << " ScavTrap Default Destructor is called"<< std::endl;
}

void ScavTrap::guardGate()
{
	if (get_hit_points() <= 0)
	{
		std::cout << "ScavTrap " << get_name() << " cannot enter Gate Keeper mode because it's out of hit points!" << std::endl;
        return;
	}
	std::cout << "ScavTrap " << get_name() << " is now in Gate keeper mode." << std::endl;
}
