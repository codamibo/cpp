/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:36:13 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 18:09:11 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _AP(40), _name(name), _weapon(NULL)
{
	return ;
}

Character::Character(Character const & cpy)
{
	_name = cpy._name;
	_AP = cpy._AP;
	_weapon = cpy._weapon;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character &			Character::operator=(Character const & rhs)
{
	if (&rhs != this)
	{
		_name = rhs._name;
		_AP = rhs._AP;
		_weapon = rhs._weapon;
	}
	return (*this);
}

void				Character::recoverAP(void)
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
	return ;
}

void				Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
	return ;
}

void				Character::attack(Enemy* en)
{
	if (_AP < _weapon->getAPCost())
		std::cout << "Not enough AP for attack" << std::endl;
	else if (en->getHP() <= 0)
		std::cout << "Attempting attack on dead enemy" << std::endl;
	else if (_weapon != NULL)
	{
		std::cout << _name << " attacks " <<  en->getType() << " with a " << _weapon->getName() << std::endl;
		_AP -= _weapon->getAPCost();
		_weapon->attack();
		en->takeDamage(_weapon->getDamage());
		if (en->getHP() <= 0)
			delete en;
	}
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, Character const & ch)
{
	if (ch.getAWeapon() != NULL)
		output_stream << ch.getName() << " has " << ch.getAP() << " AP and wields a " << ch.getAWeapon()->getName() << std::endl;
	else
		output_stream << ch.getName() << " has " << ch.getAP() << " AP and is unarmed" << std::endl;
	return (output_stream);
}

//getters and setters------------------------------------------------

std::string const	Character::getName(void) const
{
	return (_name);
}

int					Character::getAP(void) const
{
	return (_AP);
}

AWeapon *			Character::getAWeapon(void) const
{
	return (_weapon);
}

void				Character::setName(std::string const name)
{
	_name = name;
	return;
}

void				Character::setAP(const int AP)
{
	_AP = AP;
	return ;
}
