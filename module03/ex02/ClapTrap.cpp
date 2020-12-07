/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 09:06:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/07 12:34:54 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// const and dest classes--------------------------------------------------------
ClapTrap::ClapTrap(void) : name("DefaultClap"),
	hitpoints(100),
	max_hit_points(100),
	energy_points(50),
	max_energy_points(50),
	level(1),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	std::cout << "Claptrap const called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n),
	hitpoints(100),
	max_hit_points(100),
	energy_points(50),
	max_energy_points(50),
	level(1),
	melee_attack_damage(20),
	ranged_attack_damage(15),
	armor_damage_reduction(3)
{
	std::cout << "Claptrap const called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = cpy; //assignment operator is called by calling ClapTrap's copy const
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Claptrap dest called" << std::endl;
}

// operator overload --------------------------------------------------------
ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Claptrap assignment operator called" << std::endl;
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
void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage!" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->name << " attacks " << target << " at short range, causing " << this->melee_attack_damage << " points of damage!" << std::endl;
}

// other member functions ---------------------------------------------------
void			ClapTrap::takeDamage(unsigned int amount)
{
	int red;

	red = amount - this->armor_damage_reduction;
	if (this->hitpoints - red < 0)
		this->hitpoints = 0;
	else if (red > 0)
		this->hitpoints -= red;
	else // if amount is smaller than damage_reduction -> no damage
	{
		std::cout << "CL4P-TP " << this->name << " is protected by its armor" << std::endl;
		return ;
	}
	std::cout << "CL4P-TP " << this->name << " is attacked and has " << this->hitpoints << " hitpoints left" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + (int)amount > this->max_hit_points)
		this->hitpoints = this->max_hit_points; // HP cannot exceed max_hit_points
	else
		this->hitpoints += amount;
	std::cout << "CL4P-TP " << this->name << " is repaired and has " << this->hitpoints << " hitpoints left" << std::endl;	
}

// getters and setters--------------------------------------------------------
int				ClapTrap::get_hitpoints(void) const
{
	return (hitpoints);
}

int				ClapTrap::get_max_hit_points(void) const
{
	return (max_hit_points);	
}
int				ClapTrap::get_energy_points(void) const
{
	return (energy_points);	
}

int				ClapTrap::get_max_energy_points(void) const
{
	return (max_energy_points);
}

int				ClapTrap::get_level(void) const
{
	return (level);
}

std::string		ClapTrap::get_name(void) const
{
	return (name);
}

int				ClapTrap::get_melee_attack_damage(void) const
{
	return (melee_attack_damage);
}

int				ClapTrap::get_ranged_attack_damage(void) const
{
	return (ranged_attack_damage);	
}

int				ClapTrap::get_armor_damage_reduction(void) const
{
	return (armor_damage_reduction);
}

void			ClapTrap::set_hitpoints(int amount)
{
	this->hitpoints = amount;
}

void			ClapTrap::set_max_hit_points(int amount)
{
	this->max_hit_points = amount;
}

void			ClapTrap::set_energy_points(int amount)
{
	this->energy_points = amount;
}

void			ClapTrap::set_max_energy_points(int amount)
{
	this->max_energy_points = amount;
}

void			ClapTrap::set_level(int l)
{
	this->level = l;
}

void			ClapTrap::set_name(std::string n)
{
	this->name = n;
}

void			ClapTrap::set_melee_attack_damage(int amount)
{
	this->melee_attack_damage = amount;
}

void			ClapTrap::set_ranged_attack_damage(int amount)
{
	this->ranged_attack_damage = amount;
}

void			ClapTrap::set_armor_damage_reduction(int amount)
{
	this->armor_damage_reduction = amount;
}
