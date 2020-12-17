/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:52:36 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 10:26:29 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	worst("Worst", 150);
	Bureaucrat	best("Best", 1);

	std::cout << "\033[1;31mTest:	place 100\033[0m" << std::endl;
	try
	{
		Bureaucrat test("test", 100);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << "\033[1;31m\nTest:	place -1 + increment\033[0m" << std::endl;
	try
	{
		Bureaucrat test1("test1", -1);
		std::cout << test1 << test1;
		test1.incrementGrade();
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << "\033[1;31m\nTest:	place 155\033[0m" << std::endl;
	try
	{
		Bureaucrat test2("test2", 155);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << "\033[1;31m\nTest:	Try decrement worst at place 150 + try increment\033[0m" << std::endl;
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
	return (0);
}
