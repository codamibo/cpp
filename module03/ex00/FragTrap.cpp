/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:26:58 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/14 10:58:25 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : name("DefaultFrag"),
	hitpoints(100),
	max_hit_points(100),
	energy_points(100),
	max_energy_points(100),
	level(1),
	melee_attack_damage(30),
	ranged_attack_damage(20),
	armor_damage_reduction(5)
{
	std::cout << "Default const called" << std::endl;
}

FragTrap::FragTrap(std::string n) : name(n),
	hitpoints(100),
	max_hit_points(100),
	energy_points(100),
	max_energy_points(100),
	level(1),
	melee_attack_damage(30),
	ranged_attack_damage(20),
	armor_damage_reduction(5)
{
	std::cout << "Const called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Dest called" << std::endl;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & rsh)
{
	this->hitpoints = rsh.get_hitpoints();
	
}

