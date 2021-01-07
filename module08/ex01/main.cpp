/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 11:40:25 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/07 14:36:40 by iboeters      ########   odam.nl         */
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
	Span	sp(10010);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[1;31m\nTest:	find longest and shortest span\033[0m" << std::endl;
	for (int i = 0; i < 5; i++)
		sp.addNumber(rand() % 100);
	Span sp2(sp);
	Span sp3 = sp;
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
	for(int i = 0; i < 10000; i++)
		sp.addNumber(rand() % 100);
	std::cout << sp << std::endl;
	std::cout << "longest span: "<< sp.longestSpan() << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	return (0);	
}
