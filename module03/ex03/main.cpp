/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/07 12:46:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int			main(void)
{
	std::cout << "\033[1;31mConstructing a FragTrap, ClapTraps, a ScavTrap and NinjaTraps\033[0m" << std::endl;
	FragTrap frag("FragTrap");
	ScavTrap scav;
	NinjaTrap N("ninjaaa");
	NinjaTrap ninja(N); // copy constructor
	ClapTrap clap("ClapTrap");
	ClapTrap clap2;
	clap2 = clap; // assignation overload
	std::cout << "\033[1;31mSome ranged and melee attacks\033[0m" << std::endl;
	frag.rangedAttack("target");
	scav.rangedAttack("target");
	frag.meleeAttack("target");
	clap2.meleeAttack("target");
	std::cout << "\033[1;31mSome random attacks from FragTrap\033[0m" << std::endl;
	frag.vaulthunter_dot_exe("T");
	frag.vaulthunter_dot_exe("A");
	frag.vaulthunter_dot_exe("R");
	frag.vaulthunter_dot_exe("G");
	frag.vaulthunter_dot_exe("E");
	frag.vaulthunter_dot_exe("T");
	std::cout << "\033[1;31mSome random challenges from ScavTrap\033[0m" << std::endl;
	scav.challengeNewcomer("T");
	scav.challengeNewcomer("A");
	scav.challengeNewcomer("R");
	scav.challengeNewcomer("G");
	scav.challengeNewcomer("E");
	scav.challengeNewcomer("T");
	std::cout << "\033[1;31mTaking damage\033[0m" << std::endl;
	frag.takeDamage(-1);
	frag.takeDamage(30);
	scav.takeDamage(30);
	frag.takeDamage(30);
	clap2.takeDamage(30);
	frag.beRepaired(10000);
	
	std::cout << std::endl << std::endl;

	std::cout << "\033[1;31mTesting NinjaTrap...\033[0m" << std::endl;
	std::cout << "\033[1;31mSome ranged and melee attacks\033[0m" << std::endl;
	ninja.rangedAttack("target");
	ninja.meleeAttack("target");
	std::cout << "\033[1;31mSome ninjaShoebox attacks\033[0m" << std::endl;
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap2);
	std::cout << "\033[1;31mTaking damage\033[0m" << std::endl;
	ninja.takeDamage(-1);
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.takeDamage(30);
	ninja.beRepaired(10000);
	std::cout << "\033[1;31mDestructing ScavTrap FragTrap NinjaTrap and their ClapTrap classes\033[0m" << std::endl;
	return (0);
}
