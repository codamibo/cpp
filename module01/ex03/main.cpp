/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 19:24:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 15:09:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int			main(void)
{
	ZombieHorde	zombies(3);
	zombies.announce();
	ZombieHorde zombies2(5);
	zombies2.announce();
	return (0);
}
