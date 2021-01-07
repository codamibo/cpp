/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 10:48:13 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/07 11:34:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <exception>
#include <stdio.h>

int		main(void)
{
	std::cout << "\033[1;31mTest:	vector\033[0m" << std::endl;
	std::vector<int>	vec;
	for (int i = 0; i < 20; i+=2) //fill vector with even numbers
	{
		vec.push_back(i);
	}
	try //uneven number
	{
		std::vector<int>::const_iterator it;
		it = easyfind(vec, 1);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	try //even number
	{
		std::vector<int>::const_iterator it;
		it = easyfind(vec, 2);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[1;31m\nTest:	list\033[0m" << std::endl;
	std::list<int>	lst;
	for (int i = 0; i < 20; i+=2) //fill list with even numbers
	{
		lst.push_back(i);
	}
	try //uneven number
	{
		std::list<int>::const_iterator it;
		it = easyfind(lst, 1);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	try //even number
	{
		std::list<int>::const_iterator it;
		it = easyfind(lst, 2);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
