/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:26:55 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/20 23:15:37 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap{
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
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const & src); //copy constructor
		~FragTrap(void);
		FragTrap & 		operator=(FragTrap const & rhs); //assignment operator
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
		void			vaulthunter_dot_exe(std::string const & target);	
};

#endif
