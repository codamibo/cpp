/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:03:58 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 20:17:41 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Zombie.hpp"

class	ZombieHorde{
	private:
		int		n;
		Zombie*	zombies;
		
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);
};

#endif