/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:52:36 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 10:07:56 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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


	
	std::cout << "\033[1;31m\nTest:	Creating forms\033[0m" << std::endl;
	Form	f("FORM", 4, 3);
	try //execution grade too high
	{
		Form	f2("FORM", 10, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try //sign grade too low
	{
		Form	f3("FORM", 151, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	
	std::cout << "\033[1;31m\nTest:	Try signing with worst and best\033[0m" << std::endl;
	std::cout << f << worst << best;
	try
	{
		f.beSigned(worst);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	f.signForm(worst);
	f.signForm(best);
	std::cout << f;
	f.signForm(best); //try to sign when form is already signed
	return (0);
}
