/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:27:03 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/14 16:54:20 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	FragTrap(hoi);
	std::cout << hoi.get_hitpoints() << std::endl;
	hoi.rangedAttack("targettttt");
	return (0);
}