/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 17:51:55 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 18:21:36 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

//First exercise with interfaces
//Squads have an interface (ISquad) which can store all types of ISpaceMarines
//ISpaceMarines is an interface for TacticalMarines and AssaultMarines

int		main(void)
{
	std::cout << "\033[1;31mSubject main\033[0m" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	std::cout << "\033[1;31m\nOwn tests\033[0m" << std::endl;
	ISpaceMarine* jan = new TacticalMarine;
	ISpaceMarine* willem = new AssaultTerminator;
	ISpaceMarine* kees = new AssaultTerminator;
	Squad* assign = new Squad;
	Squad* vlc2 = new Squad;
	vlc2->push(jan);
	vlc2->push(willem);
	vlc2->push(willem); //test already excisiting marine
	vlc2->push(NULL); //test NULL marine
	assign->push(kees);
	Squad* cpy = new Squad(*vlc2); //deep copy
	*assign = *vlc2; //deep copy: kees in assign will first die
	delete vlc2; //original jan and willem will die
	std::cout << "\033[1;31mShow result of deep copies\033[0m" << std::endl;
	std::cout << "What's in cpy?" << std::endl << "numUnits: " << cpy->getCount() << std::endl;
	for (int i = 0; i < cpy->getCount(); i++)
	{
		ISpaceMarine* cur = cpy->getUnit(i);
		std::cout << i << " | ";
		cur->battleCry();
	}
	std::cout << "What's in assign?" << std::endl << "numUnits: " << assign->getCount() << std::endl;
	for (int i = 0; i < assign->getCount(); i++)
	{
		ISpaceMarine* cur = assign->getUnit(i);
		std::cout << i << " | ";
		cur->battleCry();
	}
	std::cout << "\033[1;31m\nDestructing\033[0m" << std::endl;
	delete cpy;
	delete assign;
	// while (1) //check for leaks
	// {
		
	// }
	return (0);
}
