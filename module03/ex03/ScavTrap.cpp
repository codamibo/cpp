/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:35 by iboeters      #+#    #+#                 */
/*   Updated: 2020/11/04 09:15:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// const and dest classes--------------------------------------------------------
ScavTrap::ScavTrap(void) : ClapTrap("DefaultScav")
{
	std::cout << "SC4V-TP: Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "SC4V-TP: Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) : ClapTrap(cpy)
{
	std::cout << "SC4V-TP: Recompiling my combat code!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

// operator overload --------------------------------------------------------
ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "SC4V-TP assigned" << std::endl;
	return (*this);
}

// class specific member function--------------------------------------------
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
	std::cout << "SC4V-TP " << this->get_name() << " challenges " << target << ": " << challenges[(int)index] << std::endl;
}
