/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:29:20 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 14:40:15 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

// object ZombieEvent stores the zombie type and can create new zombies
// with a given name/random name

int		main(void)
{
	Zombie		zombie1("Runner", "Sara");
	ZombieEvent	events;
	Zombie		*henkie;
	Zombie		*klaartje;
	Zombie		*zombie2;
	Zombie		*zombie3;
	Zombie		*zombie4;

	// creating 2 screamer zombies
	events.setZombieType("Screamer");
	std::cout << std::endl << "Creating some more zombies" << std::endl;
	henkie = events.newZombie("Henk");
	klaartje = events.newZombie("Klara");
	delete henkie;
	delete klaartje;

	// creating + deleting 3 random zombies
	std::cout << std::endl << "Creating some random Zombies" << std::endl;
	events.setZombieType("Randomers");
	zombie2 = events.randomChump();
	zombie3 = events.randomChump();
	zombie4 = events.randomChump();
	delete zombie2;
	delete zombie3;
	delete zombie4;
	
	// announcing the zombies that are still alive
	std::cout << std::endl << "Announce yourselves living zombies.." << std::endl;
	zombie1.announce();
	// system("leaks a.out"); //check for leaks
	return(0);
}
