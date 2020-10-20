/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:35 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/20 23:26:05 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// const and dest -------------------------------------------------------------
ScavTrap::ScavTrap(void) : name("DefaultScav"),
	hitpoints(100),
	max_hit_points(100),
	energy_points(50),
	max_energy_points(50),
	level(1),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : name(n),
	hitpoints(100),
	max_hit_points(100),
	energy_points(50),
	max_energy_points(50),
	level(1),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	std::cout << "Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

// operator overload --------------------------------------------------------
ScavTrap &		ScavTrap::operator=(ScavTrap const & rsh)
{
	name = rsh.name;
	hitpoints = rsh.hitpoints;
	max_hit_points = rsh.max_hit_points;
	energy_points = rsh.energy_points;
	max_energy_points = rsh.max_energy_points;
	level = rsh.level;
	melee_attack_damage = rsh.melee_attack_damage;
	ranged_attack_damage = rsh.ranged_attack_damage;
	armor_damage_reduction = rsh.armor_damage_reduction;
	return (*this);
}

// attack functions --------------------------------------------------------
void			ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at short range, causing " << this->melee_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::speedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with speed, causing 10 points of damage!" << std::endl;
}

void			ScavTrap::deadAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " deadly, causing 100 points of damage!" << std::endl;
}

void			ScavTrap::cyberAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " performs a cyber attack on " << target << " causing 25 points of damage!" << std::endl;
}

// other member functions ---------------------------------------------------
void			ScavTrap::takeDamage(unsigned int amount)
{
	int red;

	red = amount - this->armor_damage_reduction;
	if (this->hitpoints - red < 0)
		this->hitpoints = 0;
	else if (red > 0) // if amount is smaller than damage_reduction -> no damage
		this->hitpoints -= red;
	else
	{
		std::cout << "FR4G-TP " << this->name << " is protected by its armor" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->name << " is attacked and has " << this->hitpoints << " hitpoints left" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + (int)amount > this->max_hit_points)
		this->hitpoints = this->max_hit_points; // HP cannot exceed max_hit_points
	else
		this->hitpoints += amount;
	std::cout << "FR4G-TP " << this->name << " is repaired and has " << this->hitpoints << " hitpoints left" << std::endl;	
}

// getters -----------------------------------------------------------------
int				ScavTrap::get_hitpoints(void) const
{
	return (hitpoints);
}

int				ScavTrap::get_max_hit_points(void) const
{
	return (max_hit_points);	
}
int				ScavTrap::get_energy_points(void) const
{
	return (energy_points);	
}

int				ScavTrap::get_max_energy_points(void) const
{
	return (max_energy_points);
}

int				ScavTrap::get_level(void) const
{
	return (level);
}

std::string		ScavTrap::get_name(void) const
{
	return (name);
}

int				ScavTrap::get_melee_attack_damage(void) const
{
	return (melee_attack_damage);
}

int				ScavTrap::get_ranged_attack_damage(void) const
{
	return (ranged_attack_damage);	
}

int				ScavTrap::get_armor_damage_reduction(void) const
{
	return (armor_damage_reduction);
}
