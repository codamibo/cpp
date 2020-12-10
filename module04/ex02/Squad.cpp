/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 17:59:19 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 19:07:53 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _numUnits(0), _theSquad(0)
{
	return ;
}

Squad::Squad(Squad const & cpy)
{
	*this = cpy;
	return ;
}

Squad::~Squad(void)
{
	for (int i = 0; i < _numUnits; ++i)
	{
		delete _theSquad[i];	
	}
	_theSquad.clear();
	return ;
}

Squad &			Squad::operator=(Squad const & rhs)
{
	if (&rhs != this)
	{
		_numUnits = rhs._numUnits;
		_theSquad.clear(); //calls dest of all vector objects
		for (int i = 0; i < _numUnits; i++)
		{
			_theSquad.push_back(rhs.getUnit(i));
		}
	}
	return (*this);
}

int				Squad::getCount() const
{
	return(_numUnits);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	return(_theSquad[n]);
}

int				Squad::push(ISpaceMarine* newMarine)
{
	if (newMarine == NULL)
		return (-1);
	for (int i = 0; i < _numUnits; i++)
	{
		if (_theSquad[i] == newMarine)
			return (-1);
	}
	_theSquad.push_back(newMarine);
	_numUnits++;
	return (_numUnits);
}
