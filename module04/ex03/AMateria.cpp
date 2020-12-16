/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 16:51:57 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/15 10:53:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria::AMateria(AMateria const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

AMateria &				AMateria::operator=(AMateria const & rhs)
{
	if (&rhs != this)
	{
		_type = rhs.getType();
		_xp = rhs.getXP();
	}
	return (*this);
}

std::string const &		AMateria::getType(void) const
{
	return (_type);
}

unsigned int			AMateria::getXP(void) const
{
	return(_xp);
}

void					AMateria::setXP(unsigned int const XP)
{
	_xp = XP;
	return ;
}

void		 			AMateria::use(ICharacter& target)
{
	_xp += 10;
	(void)target;
}
