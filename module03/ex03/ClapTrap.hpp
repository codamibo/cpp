/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 09:06:38 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/01 17:00:06 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap{
	private:
		std::string		name;
		int				hitpoints;
		int				max_hit_points;
		int				energy_points;
		int				max_energy_points;
		int				level;
		int				melee_attack_damage;
		int				ranged_attack_damage;
		int				armor_damage_reduction;
	
	public:
		ClapTrap(void);
		ClapTrap(std::string n);
		ClapTrap(ClapTrap const & src); //copy constructor
		~ClapTrap(void);
		ClapTrap & 		operator=(ClapTrap const & rhs); //assignment operator
		
		int				get_hitpoints(void) const;
		int				get_max_hit_points(void) const;
		int				get_energy_points(void) const;
		int				get_max_energy_points(void) const;
		int				get_level(void) const;
		std::string		get_name(void) const;
		int				get_melee_attack_damage(void) const;
		int				get_ranged_attack_damage(void) const;
		int				get_armor_damage_reduction(void) const;
		void			set_hitpoints(int amount);
		void			set_max_hit_points(int amount);
		void			set_energy_points(int amount);
		void			set_max_energy_points(int amount);
		void			set_level(int l);
		void			set_name(std::string n);
		void			set_melee_attack_damage(int amount);
		void			set_ranged_attack_damage(int amount);
		void			set_armor_damage_reduction(int amount);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
