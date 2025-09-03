/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/09/03 16:49:32 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{		
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& old_obj);
		ScavTrap& operator=(const ScavTrap& old_obj);
		void guardGate();
		void attack(const std::string& target);
		~ScavTrap();
};

#endif