/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 18:53:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 20:51:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern &		Intern::operator=(Intern const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
	return (*this);
}

Form*			Intern::newPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*			Intern::newRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*			Intern::newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*			Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	Form* (Intern::* const form_funs[3])(std::string target) =
	{
		&Intern::newRobotomy,
		&Intern::newPresidential,
		&Intern::newShrubbery,
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*form_funs[i])(target));
		}
	}
	std::cout << "Form \"" << name << "\" not found" << std::endl;
	return (NULL);
}
