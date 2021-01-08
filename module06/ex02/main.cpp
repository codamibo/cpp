/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 17:32:26 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/08 11:36:53 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <cstdlib> //rand
#include <exception>

Base	*generate(void)
{
	int class_type;

	class_type = std::rand() % 3;
	std::cout << "Generated type : ";
	if (class_type == 0)
	{
		std::cout << "A" << std::endl;
		return (new A);
	}
	else if (class_type == 1)
	{
		std::cout << "B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "C" << std::endl;
		return (new C);
	}
	return NULL;
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Type not found" << std::endl;	
}

void	identify_from_reference(Base & p)
{
	int		array[3];
	
	for (int i = 0; i < 3; i++)
		array[i] = 1;
	try{
		(void)dynamic_cast<A&>(p);
	}
	catch(std::exception &e){
		array[0] = 0;
	}
	try{
		(void)dynamic_cast<B&>(p);
	}
	catch(std::exception &e){
		array[1] = 0;
	}
	try{
		(void)dynamic_cast<C&>(p);
	}
	catch(std::exception &e){
		array[2] = 0;
	}
	if (array[0] == 1)
		std::cout << "A" << std::endl;
	else if (array[1] == 1)
		std::cout << "B" << std::endl;
	else if (array[2] == 1)
		std::cout << "C" << std::endl;
	else
		std::cout << "Type not found" << std::endl;		
}

int		main(void)
{
	std::srand(std::rand() + time(0));
	std::cout << "Base without a type: " << std::endl;
	Base base;
	identify_from_pointer(&base);
	identify_from_reference(base);
	std::cout << std::endl;

	Base *random_base;
	random_base = generate();
	Base& ref = *random_base;
	std::cout << "Identified from pointer: ";
	identify_from_pointer(random_base);
	std::cout << "Identified from reference: ";
	identify_from_reference(ref);
	delete random_base;
	return (0);
}
