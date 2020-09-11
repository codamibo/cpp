/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 15:00:50 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 11:05:48 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include <string>
#include <cstdlib> //rand(); srand()
#include <ctime> //time()
#include "Zombie.hpp"

class	ZombieEvent{
	private:
		std::string		type;
		int				seed_once;
		
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void			setZombieType(std::string s);
		Zombie*			newZombie(std::string name);
		Zombie*			randomChump(void);
};

#endif