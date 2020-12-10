/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:46:22 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:12:54 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string n) : Victim(n)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & cpy) : Victim(cpy)
{
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &				Peon::operator=(Peon const & rhs)
{
	if (&rhs != this)
		Victim::operator=(rhs);
	return (*this);
}

void				Peon::getPolymorphed(void) const
{
	std::cout << Victim::get_name() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &		operator<<(std::ostream & output_stream, Peon const &Peon)
{
	output_stream << "I am " << Peon.get_name() << " and I like otters!" << std::endl;
	return (output_stream);
}
