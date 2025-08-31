/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 21:33:44 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap machine1("machine1");
	ClapTrap machine2("machine2");
	
	//machine1.beRepaired(100);
	machine1.attack("machine2");
	machine2.takeDamage(machine1.get_attack_damage());
	machine2.beRepaired(20);
	machine2.attack("machine1");
	return (0);
}