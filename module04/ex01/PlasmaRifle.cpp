/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:01:48 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 11:39:22 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
	setName("Plasma Rifle");
	setDamage(21);
	setAPCost(5);
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & cpy) : AWeapon(cpy)
{
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (&rhs != this)
		AWeapon::operator=(rhs);
	return (*this);
}

void				PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, PlasmaRifle const &PlasmaRifle)
{
	output_stream << PlasmaRifle.getName() << "	| " << PlasmaRifle.getDamage() << " | " << PlasmaRifle.getAPCost() << std::endl;
	return (output_stream);
}
