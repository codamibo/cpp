/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 09:20:34 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/07 11:48:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

// const and dest -------------------------------------------------------------
NinjaTrap::NinjaTrap(void) : ClapTrap("DefaultNinja") //initialization list to call parent const with argument (not default const)
{
	this->set_hitpoints(60);
	this->set_max_hit_points(60);
	this->set_energy_points(120);
	this->set_max_energy_points(120);
	this->set_level(1);
	this->set_melee_attack_damage(60);
	this->set_ranged_attack_damage(5);
	this->set_armor_damage_reduction(0);
	std::cout << "N1NJ4-TP: Booting sequence complete. Hello." << std::endl;
}

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	this->set_hitpoints(60);
	this->set_max_hit_points(60);
	this->set_energy_points(120);
	this->set_max_energy_points(120);
	this->set_level(1);
	this->set_melee_attack_damage(60);
	this->set_ranged_attack_damage(5);
	this->set_armor_damage_reduction(0);
	std::cout << "N1NJ4_TP: Booting sequence complete. Hello." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & cpy) : ClapTrap(cpy)
{
	std::cout << "N1NJ4_TP: Alaka-ZAM!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "N1NJ4_TP: I'm flying! I'm really flying!" << std::endl;
}

// operator overload --------------------------------------------------------
NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "N1NJ4_TP assigned" << std::endl;
	return (*this);
}

// class specific member function--------------------------------------------
void 	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	this->meleeAttack(scav.get_name());
}

void 	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	this->rangedAttack(frag.get_name());
}

void 	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	ninja.beRepaired(20);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	clap.takeDamage(100);
	std::cout << "N1NJ4_TP " << this->get_name() << ": Heh heh heh, squishy bits!" << std::endl;
}
