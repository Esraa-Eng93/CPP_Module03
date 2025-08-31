/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 17:48:24 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "=== ClapTrap Test ===" << std::endl;
    ClapTrap c1("ClapOne");
    ClapTrap c2("ClapTwo");

	c1.attack("ClapTwo");
	c2.takeDamage(c1.get_attack_damage());
	c2.beRepaired(15);

	std::cout << "\n=== ScavTrap Test ===" << std::endl;
	ScavTrap s1("ScavOne");
	ScavTrap s2("ScavTwo");

	s1.attack("ScavTwo");
	s2.takeDamage(s1.get_attack_damage());
	s2.beRepaired(20);
	
	s1.guardGate();
	s2.guardGate();
}