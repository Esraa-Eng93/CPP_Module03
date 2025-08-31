/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 21:18:19 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor is called"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Parametric Constructor is called"<< std::endl;
	this->name = name;
	set_hit_points(FragTrap::get_hit_points());
	set_energy_points(ScavTrap::get_energy_points());
	set_attack_damage(FragTrap::get_attack_damage());
}		
DiamondTrap::DiamondTrap(const DiamondTrap& old_obj) : ClapTrap(old_obj), ScavTrap(old_obj), FragTrap(old_obj)
{
	name = old_obj.name;
	std::cout << "DiamondTrap Copy Constructor is called"<< std::endl;
}
		
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& old_obj)
{
	std::cout << "DiamondTrap Asignment Operator is called"<< std::endl;
	if (this == &old_obj)
		return (*this);
	ClapTrap::operator=(old_obj);
	name = old_obj.name;
	return (*this);
}
		
void DiamondTrap::whoAmI()
{
	 std::cout << "DiamondTrap name: " << name 
              << ", ClapTrap name: " << ClapTrap::get_name() << std::endl;
}
		
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap  Default Desstructor is called"<< std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}