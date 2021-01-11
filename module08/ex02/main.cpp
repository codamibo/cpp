/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 14:56:34 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:37:35 by iboeters      ########   odam.nl         */
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
	std::cout << "\033[1;31mTest:	subject main (int)\033[0m" << std::endl;
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

	std::cout << "\033[1;31m\nTest:	own tests (char)\033[0m" << std::endl;
	MutantStack<char> mstack2;
	for (int i = 65; i < 123; i++)
		mstack2.push(i);
	MutantStack<char>::iterator it2 = mstack2.begin();
	MutantStack<char>::iterator ite2 = mstack2.end();
	std::cout << "|";
	while (it2 != ite2)
	{
		std::cout << *it2 << "|";
		++it2;
	}
	std::cout << std::endl;
	std::cout << "Top: " << mstack2.top() << std::endl;
	std::cout << "Size: " << mstack2.size() << std::endl;
	std::cout << "\033[1;31mPop out all elements\033[0m" << std::endl;
	while (!mstack2.empty())
	{
		std::cout << '|' << mstack2.top();
		mstack2.pop();
	}
	std::cout << std::endl;
	std::cout << "Empty return: " << mstack2.empty() << std::endl;

	std::cout << "\033[1;31m\nTest:	Copy constructor (strings)\033[0m" << std::endl;
	MutantStack<std::string> mstack3;
	mstack3.push("hi");
	mstack3.push("hey");
	mstack3.push("hello");
	mstack3.push("hola");
	mstack3.push("hoi");
	MutantStack<std::string>::iterator it3 = mstack3.begin();
	MutantStack<std::string>::iterator ite3 = mstack3.end();
	std::cout << "|";
	while (it3 != ite3)
	{
		std::cout << *it3 << "|";
		++it3;
	}
	std::cout << std::endl;
	MutantStack<std::string> mstack4(mstack3);
	MutantStack<std::string>::iterator it4 = mstack4.begin();
	MutantStack<std::string>::iterator ite4 = mstack4.end();
	std::cout << "|";
	while (it4 != ite4)
	{
		std::cout << *it4 << "|";
		it4++;
	}
	std::cout << std::endl;

	std::cout << "\033[1;31m\nTest:	Assignment operator (strings)\033[0m" << std::endl;
	MutantStack<std::string> mstack5;
	mstack5 = mstack4;
	MutantStack<std::string>::iterator it5 = mstack5.begin();
	MutantStack<std::string>::iterator ite5 = mstack5.end();
	std::cout << "|";
	while (it5 != ite5)
	{
		std::cout << *it5 << "|";
		it5++;
	}
	std::cout << std::endl;
	
	std::cout << "\033[1;31m\nTest:	const iterator (strings)\033[0m" << std::endl;
	MutantStack<std::string> mstack6;
	mstack6.push("hi");
	mstack6.push("hey");
	mstack6.push("hello");
	mstack6.push("hola");
	mstack6.push("hoi");
	MutantStack<std::string>::const_iterator it6 = mstack6.begin();
	MutantStack<std::string>::const_iterator ite6 = mstack6.end();
	std::cout << "|";
	while (it6 != ite6)
	{
		std::cout << *it6 << "|";
		++it6;
	}
	std::cout << std::endl;
	std::cout << "\033[1;31m\nTest:	reverse iterator (strings)\033[0m" << std::endl;
	MutantStack<std::string>::reverse_iterator it7 = mstack6.rbegin();
	MutantStack<std::string>::reverse_iterator ite7 = mstack6.rend();
	std::cout << "|";
	while (it7 != ite7)
	{
		std::cout << *it7 << "|";
		++it7;
	}
	std::cout << std::endl;
	std::cout << "\033[1;31m\nTest:	const reverse iterator (strings)\033[0m" << std::endl;
	MutantStack<std::string>::const_reverse_iterator it8 = mstack6.rbegin();
	MutantStack<std::string>::const_reverse_iterator ite8 = mstack6.rend();
	std::cout << "|";
	while (it8 != ite8)
	{
		std::cout << *it8 << "|";
		++it8;
	}
	std::cout << std::endl;
	return 0;
}
