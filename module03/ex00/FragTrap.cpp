/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:26:58 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/07 12:13:11 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// const and dest classes-------------------------------------------------------
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
	std::cout << "Hocus pocus!" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

// operator overload --------------------------------------------------------
FragTrap &		FragTrap::operator=(FragTrap const & rhs)
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
void			FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->ranged_attack_damage << " points of damage!" << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at short range, causing " << this->melee_attack_damage << " points of damage!" << std::endl;
}

void			FragTrap::speedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " with speed, causing 10 points of damage!" << std::endl;
}

void			FragTrap::deadAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " deadly, causing 100 points of damage!" << std::endl;
}

void			FragTrap::cyberAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " performs a cyber attack on " << target << " causing 25 points of damage!" << std::endl;
}

void			FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " performs a shotgun attack on " << target << " causing 99 points of damage!" << std::endl;
}

void			FragTrap::gasAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " performs a gas attack on " << target << " causing 10 points of damage!" << std::endl;
}

// other member functions ---------------------------------------------------
void			FragTrap::takeDamage(unsigned int amount)
{
	int red;

	red = amount - this->armor_damage_reduction;
	if (this->hitpoints - red < 0)
		this->hitpoints = 0;
	else if (red > 0)
		this->hitpoints -= red;
	else  // if amount is smaller than damage_reduction -> no damage
	{
		std::cout << "FR4G-TP " << this->name << " is protected by its armor" << std::endl;
		return ;
	}
	std::cout << "FR4G-TP " << this->name << " is attacked and has " << this->hitpoints << " hitpoints left" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints + (int)amount > this->max_hit_points)
		this->hitpoints = this->max_hit_points; // HP cannot exceed max_hit_points
	else
		this->hitpoints += amount;
	std::cout << "FR4G-TP " << this->name << " is repaired and has " << this->hitpoints << " hitpoints left" << std::endl;	
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	float	index;
	float	fraction;

	if (this->energy_points < 25)
		std::cout << "FR4G-TP " << this->name << " out of energy" << std::endl;
	else
	{
		this->energy_points -= 25;
		void (FragTrap::* const attacks[5])(std::string const & target) =
		{
			&FragTrap::gasAttack,
			&FragTrap::shotgunAttack,
			&FragTrap::speedAttack,
			&FragTrap::deadAttack,
			&FragTrap::cyberAttack
		};
		std::srand(rand() + time(0));
		fraction = 1 / (float)RAND_MAX;
		index = (fraction * std::rand()) * (sizeof(attacks) / sizeof(attacks[0])); // fraction * std::rand() number between 0 and 1
		(this->*attacks[(int)index])(target);
	}	
}

// getters -----------------------------------------------------------------
int				FragTrap::get_hitpoints(void) const
{
	return (hitpoints);
}

int				FragTrap::get_max_hit_points(void) const
{
	return (max_hit_points);	
}
int				FragTrap::get_energy_points(void) const
{
	return (energy_points);	
}

int				FragTrap::get_max_energy_points(void) const
{
	return (max_energy_points);
}

int				FragTrap::get_level(void) const
{
	return (level);
}

std::string		FragTrap::get_name(void) const
{
	return (name);
}

int				FragTrap::get_melee_attack_damage(void) const
{
	return (melee_attack_damage);
}

int				FragTrap::get_ranged_attack_damage(void) const
{
	return (ranged_attack_damage);	
}

int				FragTrap::get_armor_damage_reduction(void) const
{
	return (armor_damage_reduction);
}
