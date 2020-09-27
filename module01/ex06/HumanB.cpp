/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:18:44 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:24:21 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB()
// {
// 	std::cout << "HumanB alive" << std::endl;
// 	return ;
// }

HumanB::HumanB(std::string s) : first_name(s)
{
	this->weaponPtr = NULL;
	std::cout << "HumanB alive" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB shot" << std::endl;
	return ;
}

std::string	HumanB::getFirstName(void)
{
	return (this->first_name);
}

std::string const&	HumanB::getWeaponType(void)
{
	return (this->weaponPtr->getType());
}

void		HumanB::setWeapon(Weapon& w)
{
	this->weaponPtr = &w;
	return ;
}

void		HumanB::attack(void)
{
	std::cout << this->first_name << " attacks with his ";
	std::cout << this->weaponPtr->getType() << std::endl;
}