/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/03 17:02:30 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
// 	std::cout << "=== ClapTrap Test ===" << std::endl;
//     ClapTrap c1("ClapOne");
//     ClapTrap c2("ClapTwo");

// 	c1.attack("ClapTwo");
// 	c2.takeDamage(c1.get_attack_damage());
// 	c2.beRepaired(15);

// 	std::cout << "\n=== ScavTrap Test ===" << std::endl;
// 	ScavTrap s1("ScavOne");
// 	ScavTrap s2("ScavTwo");

// 	s1.attack("ScavTwo");
// 	s2.takeDamage(s1.get_attack_damage());
// 	s2.beRepaired(20);
	
// 	s1.guardGate();
// 	s2.guardGate();
	
// 	std::cout << "\n=== FragTrap Test ===" << std::endl;
// 	FragTrap f1("FragOne");
// 	FragTrap f2("FragTwo");

// 	f1.attack("FragTwo");
// 	f2.takeDamage(f1.get_attack_damage());
// 	f2.beRepaired(20);
	
// 	f1.highFivesGuys();
// 	f2.highFivesGuys();

	std::cout << "\n=== DiamondTrap Test ===" << std::endl;
	DiamondTrap d1("DiamondOne");
	DiamondTrap d2("DiamondTwo");

	d1.attack("DiamondTwo");
	d2.takeDamage(d1.get_attack_damage());
	d2.beRepaired(30);
	
	d1.whoAmI();
	d2.whoAmI();
	
	std::cout << std::endl;
	
}