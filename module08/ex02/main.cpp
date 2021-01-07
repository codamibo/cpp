/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 14:56:34 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/07 15:40:58 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <stack>
#include <iostream>
#include <list>
#include <cstdlib>

int		main(void)
{
	std::srand(rand() + time(0));
	std::cout << "\033[1;31mTest:	subject main\033[0m" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "|";
	while (it != ite)
	{
		std::cout << *it << "|";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "\033[1;31mTest:	own tests\033[0m" << std::endl;
	MutantStack<int> mstack2;
	for (int i = 0; i < 100; i++)
		mstack2.push(std::rand() % 100);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	std::cout << "|";
	while (it2 != ite2)
	{
		std::cout << *it2 << "|";
		++it2;
	}
	std::cout << std::endl;
	return 0;
}
