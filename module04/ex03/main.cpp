/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 16:50:45 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 18:24:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//unequip should not delete the main's real materia
//thus, equip will have to save a clone of materia
//learn material gets new Ice()
//thus learnmaterial will store the real material and delete it in destruction of source

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
	Character* ch = new Character("ch");
	Character* jan = new Character("jan");
	AMateria* tmp1 = new Cure;
	AMateria* tmp2 = new Ice;
	ch->equip(tmp1);
	ch->equip(tmp2);
	ch->equip(tmp1);
	ch->equip(tmp2); // doesn't work: inventory is full
	ch->equip(tmp2); // doesn't work: inventory is full
	ch->unequip(0); // cure will be erased from inventory
	std::cout << ch->getMaterias()[0]->getXP() << std::endl;
	ch->use(0, *jan);
	ch->use(1, *jan);
	ch->use(2, *jan);
	ch->use(2, *jan);
	ch->use(3, *jan);
	std::cout << ch->getMaterias()[0]->getXP() << std::endl; //to show that increment XP works
	std::cout << ch->getMaterias()[0]->getXP() << std::endl; //to show that increment XP works

	std::cout << "\033[1;31m\nDeep copy of characters\033[0m" << std::endl;
	Character* henk = new Character("henk");
	henk->equip(tmp1);
	henk->equip(tmp2);
	henk->use(0, *jan);
	henk->use(1, *jan);
	Character* cpy = new Character(*henk);
	cpy->use(0, *jan);
	cpy->use(1, *jan);
	Character* assign = new Character("another one");
	assign->equip(tmp1); // this inventory will be deleted by assigning next line
	*assign = *henk;
	assign->use(0, *jan);
	assign->use(1, *jan);
	std::cout << "Inventory amount cpy:		" << cpy->getCount() << "\nInventory amount assign:	" << assign->getCount() << std::endl;
	std::cout << "\033[1;31m\nUse of materia source\033[0m" << std::endl;	
	IMateriaSource* src2 = new MateriaSource();
	AMateria* tmp3 = new Cure;
	AMateria* tmp4 = new Ice;
	AMateria* tmp5 = new Cure;
	src2->learnMateria(tmp3);
	src2->learnMateria(tmp4);
	src2->learnMateria(tmp5);
	AMateria* tmp6 = src2->createMateria("ice");
	src2->learnMateria(tmp6);
	if(src2->createMateria("iceicebaby") == 0)
		std::cout << "failed to create materia" << std::endl; // 0 is returned
	src2->learnMateria(tmp3); // doesn't work: learned materias is full
	assign->equip(tmp3);
	std::cout << assign->getMaterias()[2]->getXP() << std::endl;
	assign->use(2, *jan);
	std::cout << assign->getMaterias()[2]->getXP() << std::endl;
	delete ch;
	delete jan;
	delete assign;
	delete henk;
	delete cpy;
	delete tmp1;
	delete tmp2;
	delete src2;
	// while (1) //check for leaks
	// {
		
	// }
	return (0);
}
