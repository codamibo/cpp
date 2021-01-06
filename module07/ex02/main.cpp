/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 14:19:01 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/06 21:20:27 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int		main(void)
{
	std::cout << "\033[1;31mTest:	empty integer array\033[0m" << std::endl;
	Array<int> a;
	try
	{
		std::cout << a << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m\nTest:	integer array of 9\033[0m" << std::endl;
	Array<int> b(9);
	b[0] = 8;
	b[1] = 4;
	try
	{
		std::cout << b[0] << std::endl;
		std::cout << b[1] << std::endl;
		std::cout << b[2] << std::endl;
		std::cout << b[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m\nTest:	testing assignment operator and copy constructor\033[0m" << std::endl;
	Array<int> c;
	c = b;
	c[3] = 2;
	try
	{
		std::cout << c[0] << std::endl;
		std::cout << c[1] << std::endl;
		std::cout << c[2] << std::endl;
		std::cout << c[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<int> d(c);
	try
	{
		std::cout << d[0] << std::endl;
		std::cout << d[1] << std::endl;
		std::cout << d[2] << std::endl;
		std::cout << d[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;31m\nTest:	string array\033[0m" << std::endl;
	Array<std::string> f(3);
	f[0] = "hey";
	f[1] = "hoi";
	f[2] = "hello";
	try
	{
		std::cout << f;
		std::cout << f[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;31m\nTest:	float array\033[0m" << std::endl;
	Array<float> g(2);
	g[0] = 8.5f;
	g[1] = 4.5f;
	try
	{
		std::cout << g;
		std::cout << g[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (1);
}
