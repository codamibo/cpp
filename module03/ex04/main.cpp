/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/03 17:39:22 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int			main(void)
{
	std::cout << "\033[1;31mConstructing a FragTrap, ClapTrap, ScavTrap, NinjaTrap and SuperTrap\033[0m" << std::endl;
	SuperTrap super;
	FragTrap frag("FragTrap");
	ScavTrap scav;
	NinjaTrap N("ninjaaa");
	NinjaTrap ninja(N); // copy constructor
	ClapTrap clap("ClapTrap");
	ClapTrap clap2;
	clap2 = clap; // assignation overload
	std::cout << "\033[1;31mAttributes of SuperTrap\033[0m" << std::endl;
	std::cout << "Hitpoints= " << super.get_hitpoints() << std::endl;
	std::cout << "Max hitpoints= " << super.get_max_hit_points() << std::endl;
	std::cout << "Energy_points= " << super.get_energy_points() << std::endl;
	std::cout << "Max energy_points= " << super.get_max_energy_points() << std::endl;
	std::cout << "Level= " << super.get_level() << std::endl;
	std::cout << "Melee attack damage= " << super.get_melee_attack_damage() << std::endl;
	std::cout << "Ranged attack damage= " << super.get_ranged_attack_damage() << std::endl;
	std::cout << "Armor damage reduction= " << super.get_armor_damage_reduction() << std::endl;	
	std::cout << "\033[1;31mRanged and meleeAttacks from SuperTrap\033[0m" << std::endl;
	ninja.meleeAttack("target");
	super.rangedAttack("target");
	std::cout << "\033[1;31mSome ninjaShoebox attacks from SuperTrap\033[0m" << std::endl;
	super.ninjaShoebox(scav);
	super.ninjaShoebox(frag);
	super.ninjaShoebox(clap2);
	std::cout << "\033[1;31mSome random attacks from SuperTrap\033[0m" << std::endl;
	super.vaulthunter_dot_exe("T");
	super.vaulthunter_dot_exe("A");
	super.vaulthunter_dot_exe("R");
	super.vaulthunter_dot_exe("G");
	super.vaulthunter_dot_exe("E");
	super.vaulthunter_dot_exe("T");
	std::cout << "\033[1;31mTaking damage\033[0m" << std::endl;
	super.takeDamage(-1);
	super.takeDamage(30);
	super.takeDamage(30);
	super.takeDamage(30);
	super.beRepaired(10000);
	std::cout << "\033[1;31mDestructing all the ClapTraps\033[0m" << std::endl;
	return (0);
}
