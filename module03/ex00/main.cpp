/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 09:27:03 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/21 10:48:24 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int			main(void)
{
	std::cout << "\033[1;31mConstructing 3 FragTraps\033[0m" << std::endl;
	FragTrap trap("FT");
	FragTrap trap2;
	FragTrap trap3(trap); // copy constructor
	trap2 = trap; // assignation overload
	std::cout << "\033[1;31mSome ranged and melee attacks\033[0m" << std::endl;
	trap.rangedAttack("target");
	trap2.rangedAttack("target");
	trap3.rangedAttack("target");
	trap.meleeAttack("target");
	trap2.meleeAttack("target");
	trap3.meleeAttack("target");
	std::cout << "\033[1;31mSome random attacks\033[0m" << std::endl;
	trap3.vaulthunter_dot_exe("T");
	trap3.vaulthunter_dot_exe("A");
	trap3.vaulthunter_dot_exe("R");
	trap3.vaulthunter_dot_exe("G");
	trap3.vaulthunter_dot_exe("E");
	trap3.vaulthunter_dot_exe("T");
	std::cout << "\033[1;31mTaking damage\033[0m" << std::endl;
	trap3.takeDamage(-1);
	trap3.takeDamage(30);
	trap3.takeDamage(30);
	trap3.takeDamage(30);
	trap3.beRepaired(10000);
	std::cout << "\033[1;31mDestructing classes\033[0m" << std::endl;
	return (0);
}