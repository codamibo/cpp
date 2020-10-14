/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:26:58 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/14 16:58:48 by iboeters      ########   odam.nl         */
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
	std::cout << "Hey, best friend!" << std::endl;
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
	std::cout << "Hey, best friend!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz..." << std::endl;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & rsh)
{
	this->name = rsh.get_name();
	this->hitpoints = rsh.get_hitpoints();
	this->max_hit_points = rsh.get_max_hit_points();	
	this->energy_points = rsh.get_energy_points();
	this->max_energy_points = rsh.get_max_energy_points();
	this->level = rsh.get_level();
	this->melee_attack_damage = rsh.get_melee_attack_damage();
	this->ranged_attack_damage = rsh.get_ranged_attack_damage();
	this->armor_damage_reduction = rsh.get_armor_damage_reduction();
	return (*this);
}

void			FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->get_name() << " attacks " << target;
	std::cout << " at range, causing " << this->get_ranged_attack_damage();
	std::cout << " points of damage!" << std::endl;
}

int				FragTrap::get_hitpoints(void) const
{
	return (this->hitpoints);
}

int				FragTrap::get_max_hit_points(void) const
{
	return (this->max_hit_points);	
}
int				FragTrap::get_energy_points(void) const
{
	return (this->energy_points);	
}

int				FragTrap::get_max_energy_points(void) const
{
	return (this->max_energy_points);
}

int				FragTrap::get_level(void) const
{
	return (this->level);
}

std::string		FragTrap::get_name(void) const
{
	return (this->name);	
}

int				FragTrap::get_melee_attack_damage(void) const
{
	return (this->melee_attack_damage);
}

int				FragTrap::get_ranged_attack_damage(void) const
{
	return (this->ranged_attack_damage);	
}

int				FragTrap::get_armor_damage_reduction(void) const
{
	return (this->armor_damage_reduction);
}