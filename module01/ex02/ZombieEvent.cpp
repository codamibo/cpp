/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 15:00:53 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 19:55:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->seed_once = 0;
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
	if (this->seed_once == 0)
	{
		std::srand(time(0)); //same second->same seed value
		this->seed_once = 1;
	}
	random_index = std::rand() % 10;
	return (newZombie(names[random_index]));
}
