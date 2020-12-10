/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:23:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 12:42:10 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int HP, std::string const & type) : _type(type), _HP(HP)
{
	return ;
}

Enemy::Enemy(Enemy const & cpy)
{
	_type = cpy._type;
	_HP = cpy._HP;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy &				Enemy::operator=(Enemy const & rhs)
{
	if (&rhs != this)
	{
		_type = rhs._type;
		_HP = rhs._HP;
	}
	return (*this);
}

void				Enemy::takeDamage(const int damage)
{
	if (damage > 0)
		_HP -= damage;
	if (_HP < 0)
		_HP = 0;
	return ;
}


//getters and setters------------------------------------------------

std::string const	Enemy::getType(void) const
{
	return (_type);
}

int					Enemy::getHP(void) const
{
	return (_HP);
}

void				Enemy::setType(std::string const type)
{
	_type = type;
	return;
}

void				Enemy::setHP(const int HP)
{
	_HP = HP;
	return ;
}
