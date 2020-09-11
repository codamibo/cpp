/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:04:00 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 20:21:53 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : n(N)
{
	int 		i;
	int			random_index;
	std::string	names[10] = {"Zoom", "Human", "Zombiewombie", "Bi", "Zombert", "ZOMBIE", "Zzzzzzz", "Eibmoz", "Zombie", "Zombiezombie"};
	
	i = 0;
	this->zombies = new Zombie[N];
	std::srand(time(0));
	while (i < N)
	{
		random_index = std::rand() % 10;
		this->zombies[i].setName(names[random_index]);
		this->zombies[i].setType("Screamers");
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->zombies;
	return ;
}

void		ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->n)
	{
		this->zombies[i].announce();
		i++;
	}
	return ;
}
