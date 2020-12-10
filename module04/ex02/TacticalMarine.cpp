/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 18:36:22 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 18:58:27 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & cpy)
{
	*this = cpy;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine*		TacticalMarine::clone(void) const
{
	ISpaceMarine *clone = new TacticalMarine;
	return (clone);
}

void				TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return ;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
