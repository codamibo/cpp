/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:52:36 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 20:51:23 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Bureaucrat	worst("Worst", 150);
	Bureaucrat	best("Best", 1);
	std::cout << "\033[1;31mTest:	Try decrement worst at place 150 + try increment\033[0m" << std::endl;
	std::cout << worst;
	try
	{
		worst.decrementGrade();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		worst.incrementGrade(); //this must be possible
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << worst;
	std::cout << "\033[1;31m\nTest:	Try incrementing best at place 1 + try decrement\033[0m" << std::endl;
	std::cout << best;
	try
	{
		best.incrementGrade();
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		best.decrementGrade(); // this must be possible
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << best;

	std::cout << "\033[1;31m\nTest:	PresidentialPardonForm\033[0m" << std::endl;
	// Form	f("FORM", 4, 3); // not possible abstract class
	PresidentialPardonForm		f("TYPE");
	std::cout << f << worst << best;
	best.executeForm(f);
	std::cout << f;
	f.signForm(best); //try to sign when form is already signed
	worst.executeForm(f);
	best.executeForm(f);
	
	std::cout << "\033[1;31m\nTest:	RobotomyRequestForm\033[0m" << std::endl;
	RobotomyRequestForm			f2("TYPE");
	std::cout << f2;
	f2.signForm(best);
	best.executeForm(f2);

	std::cout << "\033[1;31m\nTest:	ShrubberyCreationForm\033[0m" << std::endl;
	ShrubberyCreationForm		f3("TYPE");
	std::cout << f3;
	f3.signForm(best);
	best.executeForm(f3);

	std::cout << "\033[1;31m\nTest:	Intern\033[0m" << std::endl;
	Intern someRandomIntern;
	Form *form;
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *form;
	delete form;
	form = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << *form;
	delete form;
	form = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << *form;
	delete form;
	form = someRandomIntern.makeForm("unknown name", "TARGET"); //file name that doesn't exist
	return (0);
}
