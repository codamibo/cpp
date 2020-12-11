/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 10:17:57 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 17:51:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "Grenade.hpp"

int		main(void)
{
	std::cout << "\033[1;31mSubject main\033[0m" << std::endl;
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

	std::cout << "\033[1;31m\nOwn tests\033[0m" << std::endl;
	me->attack(b);
	Character* me2 = new Character("me2");
	me2 = me;
	std::cout << (*me2);
	std::cout << "\033[1;31mDisplay weapon funtionalities\033[0m" << std::endl;
	// AWeapon a; //not possible: unimplemented pure function attack
	PlasmaRifle p;
	PowerFist fist;
	Grenade g;
	std::cout << p << fist << g;
	std::cout << "\033[1;31mDisplay enemies\033[0m" << std::endl;
	Enemy(100, "JOHN DOE"); //possible to make "default" enemy
	Enemy* SM = new SuperMutant();
	RadScorpion* RS = new RadScorpion();
	std::cout << (*SM) << (*RS);
	(*SM).takeDamage(10); //will take 3 less damage
	(*RS).takeDamage(10);
	std::cout << (*SM) << (*RS);
	std::cout << "\033[1;31mLet's fight\033[0m" << std::endl;
	me2->equip(&g);
	std::cout << *me2 << *SM;
	me2->attack(SM);
	me2->equip(pf);
	std::cout << *me2 << *SM;
	me2->attack(SM);
	std::cout << *me2 << *SM;
	me2->attack(SM); //from here not enough AP left
	me2->attack(SM);
	me2->attack(SM);
	std::cout << "\033[1;31mRecover\033[0m" << std::endl;
	std::cout << *me2;
	me2->recoverAP();
	std::cout << *me2;
	me2->recoverAP();
	std::cout << *me2;
	me2->recoverAP();
	std::cout << *me2;
	me2->recoverAP();
	std::cout << *me2;
	std::cout << "\033[1;31m\nDestructing\033[0m" << std::endl;
	delete me;
	delete me2;
	delete pr;
	delete pf;
	// delete b; //is deleted by me
	delete SM;
	delete RS;
	return (0);
}
