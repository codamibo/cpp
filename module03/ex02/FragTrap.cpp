/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:41 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/01 16:58:56 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// const and dest -------------------------------------------------------------
FragTrap::FragTrap(void) : ClapTrap("DefaultFrag")
{
	this->set_hitpoints(100);
	this->set_max_hit_points(100);
	this->set_energy_points(100);
	this->set_max_energy_points(100);
	this->set_level(1);
	this->set_melee_attack_damage(30);
	this->set_ranged_attack_damage(20);
	this->set_armor_damage_reduction(5);
	std::cout << "FR4G_TP: Hey, best friend!" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	this->set_hitpoints(100);
	this->set_max_hit_points(100);
	this->set_energy_points(100);
	this->set_max_energy_points(100);
	this->set_level(1);
	this->set_melee_attack_damage(30);
	this->set_ranged_attack_damage(20);
	this->set_armor_damage_reduction(5);
	std::cout << "FR4G_TP: Hey, best friend!" << std::endl;
}


FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(cpy)
{
	std::cout << "FR4G_TP: Hocus pocus!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G_TP: Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

// operator overload --------------------------------------------------------
FragTrap &		FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "FR4G-TP assigned" << std::endl;
	return (*this);
}

// class specific member function--------------------------------------------
void			FragTrap::speedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->get_name() << " attacks " << target << " with speed, causing 10 points of damage!" << std::endl;
}

void			FragTrap::deadAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->get_name() << " attacks " << target << " deadly, causing 100 points of damage!" << std::endl;
}

void			FragTrap::cyberAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->get_name() << " performs a cyber attack on " << target << " causing 25 points of damage!" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	float	index;
	float	fraction;

	if (this->get_energy_points() < 25)
		std::cout << "FR4G-TP " << this->get_name() << " out of energy" << std::endl;
	else
	{
		set_energy_points(this->get_energy_points() - 25);
		void (FragTrap::* const attacks[5])(std::string const & target) =
		{
			&FragTrap::rangedAttack,
			&FragTrap::meleeAttack,
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
