/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 11:40:25 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/12 10:47:44 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>

int		main(void)
{
	std::srand(rand() + time(0));
	std::cout << "\033[1;31mTest:	subject main\033[0m" << std::endl;
	Span spa = Span(5);
	spa.addNumber(5);
	spa.addNumber(3);
	spa.addNumber(17);
	spa.addNumber(9);
	spa.addNumber(11);
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;

	std::cout << "\033[1;31m\nTest:	empty object\033[0m" << std::endl;
	Span	sp(5);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[1;31m\nTest:	find longest and shortest span\033[0m" << std::endl;
	sp.addNumber(-10);
	sp.addNumber(-5);
	for (int i = 2; i < 5; i++)
		sp.addNumber(rand() % 100);
	Span sp2(sp); //copy constructor
	Span sp3 = sp; //assignment operator
	std::cout << sp << std::endl;
	std::cout << "longest span: "<< sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;

	std::cout << "\033[1;31m\nTest:	cpy constructor and assignment operator\033[0m" << std::endl;
	std::cout << sp2 << std::endl;
	std::cout << "longest span: "<< sp2.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << sp3 << std::endl;
	std::cout << "longest span: "<< sp2.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;

	std::cout << "\033[1;31m\nTest:	more than 10000 numbers\033[0m" << std::endl;
	Span sp4(10001);
	std::vector<int>::const_iterator it = sp4.getArray().begin();
	std::vector<int>::const_iterator it_end = it + 10002;
	try
	{
		sp4.addNumbersByRange(it, it_end);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp4 << std::endl;
	std::cout << "longest span: "<< sp4.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp4.shortestSpan() << std::endl;
	return (0);
}
