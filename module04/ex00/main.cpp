/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:28:29 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 18:03:08 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peon2.hpp"

int		main(void)
{
	std::cout << "\033[1;31mSubject main\033[0m" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "\033[1;31m\nOwn tests\033[0m" << std::endl;
	// Sorcerer robert2; //not possible
	// Victim jim2; //not possible
	// Peon joe2; //not possible
	Victim vic = jim; //assignment operator
	Victim vic2 = joe; //assignment opeartor with derived class
	Victim vic3(jim); //cpy const
	Victim vic4(joe); //cpy const derived class
	Peon peon = joe; //derived class assignment operator
	Peon peonn(joe); //derived class cpy const
	std::cout << "\033[1;31mPolymorph to 4 sheeps\033[0m" << std::endl;
	vic.getPolymorphed();
	vic2.getPolymorphed();
	vic3.getPolymorphed();
	vic4.getPolymorphed();
	std::cout << "\033[1;31mPolymorph to 2 ponies\033[0m" << std::endl;
	peon.getPolymorphed();
	peonn.getPolymorphed();
	std::cout << "\033[1;31mTesting polymorphism with extra victim\033[0m" << std::endl;
	Victim *poly = new Peon2("Joe2");
	robert.polymorph(*poly);
	delete poly;
	
	std::cout << "\033[1;31m\nDestructing\033[0m" << std::endl;
	return (0);
}
