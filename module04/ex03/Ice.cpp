/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 14:55:29 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 13:09:17 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice::Ice(Ice const & cpy) : AMateria(cpy)
{
	return ;
}

Ice &		Ice::operator=(Ice const & rhs)
{
	if (&rhs != this)
		setXP(rhs.getXP());
	return (*this);
}

Ice*		Ice::clone(void) const
{
	return (new Ice(*this));
}

void 		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
