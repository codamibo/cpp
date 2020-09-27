/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:18:46 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:25:54 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w) : first_name(s), weaponRef(w)
{
	std::cout << "HumanA alive" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA shot" << std::endl;
	return ;
}

std::string	HumanA::getFirstName(void)
{
	return (this->first_name);
}

std::string const&	HumanA::getWeaponType(void)
{
	return (this->weaponRef.getType());
}

void		HumanA::setWeapon(Weapon w)
{
	this->weaponRef = w;
	return ;
}

void		HumanA::attack(void)
{
	std::cout << this->getFirstName() << " attacks with his ";
	std::cout << this->getWeaponType() << std::endl;
}
