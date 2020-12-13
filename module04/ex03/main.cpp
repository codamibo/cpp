/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 16:50:45 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 13:09:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main(void)
{
	std::cout << "\033[1;31mSubject main\033[0m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	
	std::cout << "\033[1;31m\nOwn tests\033[0m" << std::endl;
	ICharacter* ch = new Character("char");
	ICharacter* jan = new Character("jan");
	AMateria* tmp1 = new Cure;
	AMateria* tmp2 = new Ice;
	AMateria* tmp3 = new Cure;
	AMateria* tmp4 = new Ice;
	AMateria* tmp5 = new Cure;
	ch->equip(tmp1);
	ch->equip(tmp2);
	ch->equip(tmp3);
	ch->equip(tmp4);
	ch->equip(tmp5);
	ch->equip(tmp5);
	ch->unequip(0); // cure will be erased from inventory
	std::cout << tmp1->getXP() << std::endl;
	ch->use(0, *jan);
	ch->use(1, *jan);
	ch->use(2, *jan);
	ch->use(2, *jan);
	ch->use(3, *jan);
	std::cout << tmp2->getXP() << std::endl;
	std::cout << tmp4->getXP() << std::endl;

	std::cout << "\033[1;31m\nDeep copy of characters\033[0m" << std::endl;
	Character* henk = new Character("henk");
	henk->equip(tmp5);
	henk->equip(tmp2);
	henk->use(0, *jan);
	henk->use(1, *jan);
	Character* cpy = new Character(*henk);
	cpy->use(0, *jan);
	cpy->use(1, *jan);
	Character* assign = new Character("");
	assign = henk;
	assign->use(0, *jan);
	assign->use(1, *jan);
	std::cout << "Inventory amount cpy: " << cpy->getCount() << " & inventory amount assign: " << assign->getCount() << std::endl;
	delete ch;
	return (0);
	
}
