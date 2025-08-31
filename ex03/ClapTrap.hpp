/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:41:54 by ealshorm          #+#    #+#             */
/*   Updated: 2025/08/31 16:43:34 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		int hit_points;
		int Energy_points;
		int attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string entering_name);
		ClapTrap(const ClapTrap& last_obj);
		ClapTrap& operator=(const ClapTrap& last_obj);
		void set_name(std::string name);
		void set_hit_points(int hp);
		void set_energy_points(int ep);
		void set_attack_damage(int ad);
		std::string get_name() const;
		int get_energy_points() const;
		int get_hit_points() const;
		int get_attack_damage() const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif