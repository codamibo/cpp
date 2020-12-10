/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:29:47 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:59:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string n) : _name(n)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const & cpy)
{
	*this = cpy;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	return ;
}

std::string			Victim::get_name(void) const
{
	return(_name);
}

Victim &			Victim::operator=(Victim const & rhs)
{
	if (&rhs != this)
		_name = rhs._name;
	return (*this);
}

void				Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &		operator<<(std::ostream & output_stream, Victim const &Victim)
{
	output_stream << "I am " << Victim.get_name() << " and I like otters!" << std::endl;
	return (output_stream);
}
