/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:52:40 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 09:56:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
	return (*this);
}

void				Bureaucrat::incrementGrade(void)
{
	if ((_grade -= 1) < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade -= 1;
	return ;
}

void				Bureaucrat::decrementGrade(void)
{
	if ((_grade += 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
	return ;
}

const std::string	Bureaucrat::getName(void) const
{
	return(_name);
}

int					Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::ostream &		operator<<(std::ostream & output_stream, Bureaucrat const & bureaucrat)
{
	output_stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (output_stream);
}
