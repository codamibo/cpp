/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon2.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 16:07:34 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 16:10:04 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon2.hpp"

Peon2::Peon2(std::string n) : Victim(n)
{
	std::cout << "Bonjour." << std::endl;
	return ;
}

Peon2::Peon2(Peon2 const & cpy) : Victim(cpy)
{
	return ;
}

Peon2::~Peon2(void)
{
	std::cout << "Au revoir." << std::endl;
	return ;
}

Peon2 &				Peon2::operator=(Peon2 const & rhs)
{
	if (&rhs != this)
		Victim::operator=(rhs);
	return (*this);
}

void				Peon2::getPolymorphed(void) const
{
	std::cout << Victim::get_name() << " has been turned into a snake!" << std::endl;
}

std::ostream &		operator<<(std::ostream & output_stream, Peon2 const &Peon2)
{
	output_stream << "I am " << Peon2.get_name() << " and I like otters!" << std::endl;
	return (output_stream);
}
