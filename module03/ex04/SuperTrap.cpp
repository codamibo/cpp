/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 16:27:38 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/03 17:18:47 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

// const and dest -------------------------------------------------------------
SuperTrap::SuperTrap(void) : ClapTrap("DefaultSuper"), FragTrap(), NinjaTrap()
{
	this->set_hitpoints(FragTrap::_HP);
	this->set_max_hit_points(FragTrap::_MHP);
	this->set_energy_points(NinjaTrap::_EP);
	this->set_max_energy_points(NinjaTrap::_MEP);
	this->set_level(1);
	this->set_melee_attack_damage(NinjaTrap::_MAD);
	this->set_ranged_attack_damage(FragTrap::_RAD);
	this->set_armor_damage_reduction(FragTrap::_ADR);
	std::cout << "SUP3R-TP: Look out everybody! Things are about to get awesome!" << std::endl;
}

SuperTrap::SuperTrap(std::string n) : ClapTrap(n), FragTrap(), NinjaTrap()
{
	this->set_hitpoints(FragTrap::_HP);
	this->set_max_hit_points(FragTrap::_MHP);
	this->set_energy_points(NinjaTrap::_EP);
	this->set_max_energy_points(NinjaTrap::_MEP);
	this->set_level(1);
	this->set_melee_attack_damage(NinjaTrap::_MAD);
	this->set_ranged_attack_damage(FragTrap::_RAD);
	this->set_armor_damage_reduction(FragTrap::_ADR);
	std::cout << "SUP3R-TP: Look out everybody! Things are about to get awesome!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & cpy) : ClapTrap(cpy)
{
	std::cout << "SUP3R-TP: I'm made of magic!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUP3R-TP: The robot is dead, long live the robot!" << std::endl;
}

// operator overload --------------------------------------------------------
SuperTrap &		SuperTrap::operator=(SuperTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "SUP3R-TP assigned" << std::endl;
	return (*this);
}

// class specific member function--------------------------------------------
void			SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::rangedAttack(target);
	
}
