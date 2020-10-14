/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:26:55 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/12 09:48:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap{
	private:
		int				hitpoints;
		int				max_hit_points;
		int				energy_points;
		int				max_energy_points;
		int				level;
		std::string		name;
		int				melee_attack_damage;
		int				ranged_attack_damage;
		int				armor_damage_reduction;
	
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const & src); //copy constructor
		~FragTrap(void);
		FragTrap & 		operator=(FragTrap const & rhs); //assignment operator
		int				get_hitpoints(void);
		int				get_max_hit_points(void);
		int				get_energy_points(void);
		int				get_max_energy_points(void);
		int				get_level(void);
		std::string		get_name(void);
		int				get_melee_attack_damage(void);
		int				get_ranged_attack_damage(void);
		int				get_armor_damage_reduction(void);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		
};

#endif