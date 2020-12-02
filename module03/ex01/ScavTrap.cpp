/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:35 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/28 10:10:35 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
	name = rhs.name;
	hitpoints = rhs.hitpoints;
	max_hit_points = rhs.max_hit_points;
	energy_points = rhs.energy_points;
	max_energy_points = rhs.max_energy_points;
	level = rhs.level;
	melee_attack_damage = rhs.melee_attack_damage;
	ranged_attack_damage = rhs.ranged_attack_damage;
	armor_damage_reduction = rhs.armor_damage_reduction;
	return (*this);
}

// attack functions --------------------------------------------------------
void			ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at short range, causing " << this->melee_attack_damage << " points of damage!" << std::endl;
}

void			ScavTrap::speedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " with speed, causing 10 points of damage!" << std::endl;
}

void			ScavTrap::deadAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " deadly, causing 100 points of damage!" << std::endl;
}

void			ScavTrap::cyberAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->name << " performs a cyber attack on " << target << " causing 25 points of damage!" << std::endl;
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
		std::cout << "SC4V-TP " << this->name << " is protected by its armor" << std::endl;
		return ;
	}
	std::cout << "SC4V-TP " << this->name << " is attacked and has " << this->hitpoints << " hitpoints left" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + (int)amount > this->max_hit_points)
		this->hitpoints = this->max_hit_points; // HP cannot exceed max_hit_points
	else
		this->hitpoints += amount;
	std::cout << "SC4V-TP " << this->name << " is repaired and has " << this->hitpoints << " hitpoints left" << std::endl;	
}

void			ScavTrap::challengeNewcomer(std::string const & target) const
{
	float	index;
	float	fraction;

	std::string challenges[5]{
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
	};
	std::srand(rand() + time(0));
	fraction = 1 / (float)RAND_MAX;
	index = (fraction * std::rand()) * (sizeof(challenges) / sizeof(challenges[0])); // fraction * std::rand() gives random number between 0 and 1
	std::cout << "SC4V-TP " << this->name << " challenges " << target << ": " << challenges[(int)index] << std::endl;
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
