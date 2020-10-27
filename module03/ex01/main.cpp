/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/21 11:00:14 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
		
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;31mConstructing 3 ScavTraps\033[0m" << std::endl;
	ScavTrap strap("ST");
	ScavTrap strap2;
	ScavTrap strap3(strap); // copy constructor
	strap2 = strap; // assignation overload
	std::cout << "\033[1;31mSome ranged and melee attacks\033[0m" << std::endl;
	strap.rangedAttack("target");
	strap2.rangedAttack("target");
	strap3.rangedAttack("target");
	strap.meleeAttack("target");
	strap2.meleeAttack("target");
	strap3.meleeAttack("target");
	std::cout << "\033[1;31mSome random challenges\033[0m" << std::endl;
	strap3.challengeNewcomer("T");
	strap3.challengeNewcomer("A");
	strap3.challengeNewcomer("R");
	strap3.challengeNewcomer("G");
	strap3.challengeNewcomer("E");
	strap3.challengeNewcomer("T");
	std::cout << "\033[1;31mTaking damage\033[0m" << std::endl;
	strap3.takeDamage(2);
	strap3.takeDamage(30);
	strap3.takeDamage(30);
	strap3.takeDamage(30);
	strap3.beRepaired(10000);
	std::cout << "\033[1;31mDestructing ScavTrap FragTrap classes\033[0m" << std::endl;
	return (0);
}
