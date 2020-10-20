/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:32 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/20 23:18:26 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap{
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
		ScavTrap(void);
		ScavTrap(std::string n);
		ScavTrap(ScavTrap const & src); //copy constructor
		~ScavTrap(void);
		ScavTrap & 		operator=(ScavTrap const & rhs); //assignment operator
		int				get_hitpoints(void) const;
		int				get_max_hit_points(void) const;
		int				get_energy_points(void) const;
		int				get_max_energy_points(void) const;
		int				get_level(void) const;
		std::string		get_name(void) const;
		int				get_melee_attack_damage(void) const;
		int				get_ranged_attack_damage(void) const;
		int				get_armor_damage_reduction(void) const;
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			speedAttack(std::string const & target);
		void			deadAttack(std::string const & target);
		void			cyberAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		// void			vaulthunter_dot_exe(std::string const & target);
};

#endif
