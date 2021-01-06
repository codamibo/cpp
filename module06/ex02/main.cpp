/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 17:32:26 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/05 17:41:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <string>
#include <cstdlib> //rand
#include <exception>


class A : public Base{};
class B : public Base{};
class C : public Base{};

Base	*generate(void)
{
	int class_type;

	float fraction = 1 / static_cast<float>(RAND_MAX);
	class_type = fraction * std::rand() * 3;
	if (class_type == 0)
		return (new A);
	else if (class_type == 1)
		return (new B);
	else
		return (new C);
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
		std::cout << "type not found" << std::endl;	
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
		std::cout << "type not found" << std::endl;		
}

int		main(void)
{
	Base *random_base;

	srand(rand() + time(0));
	random_base = generate();
	Base& ref = *random_base;
	identify_from_pointer(random_base);
	identify_from_reference(ref);
	delete random_base;
	return (0);
}
