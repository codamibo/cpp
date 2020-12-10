/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:20:35 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 12:29:27 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & cpy) : Enemy(cpy)
{
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant &		SuperMutant::operator=(SuperMutant const & rhs)
{
	if (&rhs != this)
		Enemy::operator=(rhs);
	return (*this);
}

void				SuperMutant::takeDamage(const int damage)
{
	Enemy::takeDamage(damage - 3);
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, SuperMutant const &SuperMutant)
{
	output_stream << SuperMutant.getType() << "	| " << SuperMutant.getHP() << std::endl;
	return (output_stream);
}
