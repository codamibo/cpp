/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:28:26 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:13:30 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : _name(n), _title(t)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & cpy)
{
	*this = cpy;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::string			Sorcerer::get_name(void) const
{
	return(_name);
}

std::string			Sorcerer::get_title(void) const
{
	return(_title);
}

Sorcerer			Sorcerer::operator=(Sorcerer const & rhs)
{
	if (&rhs != this)
	{
		_name = rhs._name;
		_title = rhs._title;
	}
	return (*this);
}

void				Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}


std::ostream &		operator<<(std::ostream & output_stream, Sorcerer const &sorcerer)
{
	output_stream << "I am " << sorcerer.get_name() << ", " << sorcerer.get_title() << ", and I like ponies!" << std::endl;
	return (output_stream);
}
