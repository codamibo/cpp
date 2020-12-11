/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 17:59:19 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/11 13:17:36 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _numUnits(0), _theSquad(0)
{
	return ;
}

Squad::Squad(Squad const & cpy)
{
	for (int i = 0; i < _numUnits; i++)
		delete _theSquad[i];
	_theSquad.clear();
	_numUnits = 0;
	for (int i = 0; i < cpy.getCount(); i++)
		(*this).push(cpy.getUnit(i)->clone());
	return ;
}

Squad::~Squad(void)
{
	for (int i = 0; i < _numUnits; i++)
		delete _theSquad[i];
	_theSquad.clear();
	return ;
}

Squad &			Squad::operator=(Squad const & rhs)
{
	if (&rhs != this)
	{
		for (int i = 0; i < _numUnits; i++)
			delete _theSquad[i];
		_theSquad.clear();
		_numUnits = 0;
		for (int i = 0; i < rhs.getCount(); i++)
			(*this).push(rhs.getUnit(i)->clone());
	}
	return (*this);
}

int				Squad::getCount() const
{
	return(_numUnits);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n >= 0 && n < _numUnits)
		return(_theSquad[n]);
	return(NULL);
}

int				Squad::push(ISpaceMarine* newMarine)
{
	if (newMarine == NULL)
		return (-1);
	for (int i = 0; i < _numUnits; i++)
	{
		if (_theSquad[i] == newMarine)
		{
			std::cout << "The marine is already present in the squad" << std::endl;
			return (_numUnits);
		}
	}
	_theSquad.push_back(newMarine);
	_numUnits++;
	return (_numUnits);
}
