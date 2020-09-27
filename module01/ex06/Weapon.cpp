/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:18:49 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 21:43:39 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon built" << std::endl;
	return ;
}

Weapon::Weapon(std::string s) : type(s)
{
	std::cout << "Weapon built" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon broke down" << std::endl;
	return ;
}

std::string const&		Weapon::getType(void)
{
	std::string const& ref = this->type;
	return (ref);
}

void					Weapon::setType(std::string s)
{
	this->type = s;
	return ;
}
