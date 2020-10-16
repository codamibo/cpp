/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 15:00:53 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 15:15:14 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	std::srand(rand() + time(0)); //compile in same second->same seed value
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "Event closing" << std::endl;
	return ;
}

void			ZombieEvent::setZombieType(std::string s)
{
	this->type = s;
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie*		new_zombie = new Zombie(this->type, name);
	
	return (new_zombie);
}

Zombie*			ZombieEvent::randomChump(void)
{
	int			random_index;
	
	std::string names[10] = {"Zoom", "Human", "Zombiewombie", "Bi", "Zombert", "ZOMBIE", "Zzzzzzz", "Eibmoz", "Zombie", "Zombiezombie"};
	random_index = std::rand() % 10;
	return (newZombie(names[random_index]));
}
