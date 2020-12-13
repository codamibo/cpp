/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 14:55:26 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/12 21:40:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure::Cure(Cure const & cpy) : AMateria(cpy)
{
	return ;
}

Cure &		Cure::operator=(Cure const & rhs)
{
	if (&rhs != this)
	{
		setXP(rhs.getXP());
	}
	return (*this);
}

Cure*		Cure::clone(void) const
{
	return (new Cure(*this));
}

void 		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
