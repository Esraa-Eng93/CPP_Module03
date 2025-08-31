/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 19:40:27 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor is called"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
	std::cout << "FragTrap Parameteric Constructor is called"<< std::endl;
}

FragTrap::FragTrap(const FragTrap& old_obj) : ClapTrap(old_obj)
{
	std::cout << "FragTrap Copy Constructor is called"<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& old_obj)
{
	std::cout << "FragTrap Copy Asignment Operatpor is called"<< std::endl;
	if (this == &old_obj)
		return (*this);
	ClapTrap::operator=(old_obj);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (get_hit_points() <= 0)
	{
		std::cout << "Cannot high five because: ClapTrap " << get_name() << " is dead." << std::endl;
		return;
	}
		std::cout << "FragTrap from ClapTrap " << get_name() << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor is called"<< std::endl;
}