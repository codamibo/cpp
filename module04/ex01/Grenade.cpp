/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Grenade.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 16:14:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 16:33:42 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Grenade.hpp"

Grenade::Grenade()
{
	setName("Grenade");
	setDamage(80);
	setAPCost(10);
	return ;
}

Grenade::Grenade(Grenade const & cpy) : AWeapon(cpy)
{
	return ;
}

Grenade::~Grenade(void)
{
	return ;
}

Grenade &		Grenade::operator=(Grenade const & rhs)
{
	if (&rhs != this)
		AWeapon::operator=(rhs);
	return (*this);
}

void				Grenade::attack() const
{
	std::cout << "* kabooooom *" << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, Grenade const &Grenade)
{
	output_stream << Grenade.getName() << "		| Damage: " << Grenade.getDamage() << " | APCost: " << Grenade.getAPCost() << std::endl;
	return (output_stream);
}
