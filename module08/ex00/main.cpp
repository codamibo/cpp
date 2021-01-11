/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 10:48:13 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:27:33 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <deque>

int		main(void)
{
	std::cout << "\033[1;31mTest:	vector\033[0m" << std::endl;
	std::vector<int>	vec;
	for (int i = 0; i < 20; i+=2) //fill vector with even numbers
	{
		vec.push_back(i);
	}
	for (int i = 0; i < 10; i++)
		std::cout << vec[i] << std::endl;
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
	std::list<int>::const_iterator it;
	for (it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << std::endl;
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


	std::cout << "\033[1;31m\nTest:	deque\033[0m" << std::endl;
	std::deque<int>	deq;
	for (int i = 0; i < 20; i+=2) //fill deque with even numbers
	{
		if (i < 10)
			deq.push_back(i);
		else
			deq.push_front(i);
	}
	for (int i = 0; i < 10; i++)
		std::cout << deq[i] << std::endl;
	try //uneven number
	{
		std::deque<int>::const_iterator it;
		it = easyfind(deq, 1);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	try //even number
	{
		std::deque<int>::const_iterator it;
		it = easyfind(deq, 2);
		std::cout << "Number is found" << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
