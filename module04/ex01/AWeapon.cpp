/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 10:18:24 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 11:10:18 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & cpy)
{
	_name = cpy._name;
	_APCost = cpy._APCost;
	_damage = cpy._damage;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon &			AWeapon::operator=(AWeapon const & rhs)
{
	if (&rhs != this)
	{
		_name = rhs._name;
		_APCost = rhs._APCost;
		_damage = rhs._damage;
	}
	return (*this);
}

//getters and setters------------------------------------------------

std::string const	AWeapon::getName(void) const
{
	return (_name);
}

int					AWeapon::getDamage(void) const
{
	return (_damage);
}

int					AWeapon::getAPCost(void) const
{
	return (_APCost);
}

void				AWeapon::setName(std::string const name)
{
	_name = name;
	return;
}

void				AWeapon::setDamage(const int damage)
{
	_damage = damage;
	return ;
}

void				AWeapon::setAPCost(const int APCost)
{
	_APCost = APCost;
	return ;
}
