/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 19:24:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 20:20:20 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int			main(void)
{
	ZombieHorde	zombies(4);
	zombies.announce();
	ZombieHorde zombies2(5);
	zombies2.announce();
	return (0);
}
