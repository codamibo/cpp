/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:31:02 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 15:39:47 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & cpy) : Enemy(cpy)
{
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion &		RadScorpion::operator=(RadScorpion const & rhs)
{
	if (&rhs != this)
		Enemy::operator=(rhs);
	return (*this);
}

std::ostream &		operator<<(std::ostream & output_stream, RadScorpion const &RadScorpion)
{
	output_stream << RadScorpion.getType() << "	| HP: " << RadScorpion.getHP() << std::endl;
	return (output_stream);
}
