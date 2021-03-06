/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:18:33 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 15:39:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
	setName("Power Fist");
	setDamage(50);
	setAPCost(8);
	return ;
}

PowerFist::PowerFist(PowerFist const & cpy) : AWeapon(cpy)
{
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist &		PowerFist::operator=(PowerFist const & rhs)
{
	if (&rhs != this)
		AWeapon::operator=(rhs);
	return (*this);
}

void				PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, PowerFist const &PowerFist)
{
	output_stream << PowerFist.getName() << "	| Damage: " << PowerFist.getDamage() << " | APCost: " << PowerFist.getAPCost() << std::endl;
	return (output_stream);
}
