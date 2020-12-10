/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 10:17:57 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 13:07:33 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int		main(void)
{
	// AWeapon a; //not possible: unimplemented pure function attack
	// PlasmaRifle p;
	// PowerFist fist;
	// Enemy(100, "JOHN DOE");
	// std::cout << p << fist;
	
	// SuperMutant SM;
	// RadScorpion RS;
	// std::cout << SM << RS;
	// SM.takeDamage(10);
	// RS.takeDamage(10);
	// std::cout << SM << RS;
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
return 0;

	
	return (0);
}
