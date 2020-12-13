/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 20:42:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 17:55:56 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _numInventory(0), _name(name)
{
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < _numInventory; i++)
		delete _materias[i];
	_materias.clear();
	return ;
}

Character::Character(Character const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

Character &				Character::operator=(Character const & rhs)
{
	if (&rhs != this)
	{
		for (int i = 0; i < _numInventory; i++)
			delete _materias[i];
		_materias.clear();
		_numInventory = 0;
		for (int i = 0; i < rhs.getCount(); i++)
		{
			(*this).equip(rhs._materias[i]);
		}
	}
	return (*this);
}

std::string const &		Character::getName() const
{
	return (_name);
}

int						Character::getCount(void) const
{
	return (_numInventory);
}

std::vector<AMateria*>	Character::getMaterias(void) const
{
	return (_materias);
}

void					Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	if (_numInventory == 4)
	{
		std::cout << "Character already has 4 equipped materias" << std::endl;
		return ;
	}
	_materias.push_back(m->clone());
	_numInventory++;
	return ;
}

void 					Character::unequip(int idx)
{
	if (idx >= _numInventory)
	{
		std::cout << "Character does not have inventory to unequip on index" << idx << std::endl;
		return ;
	}
	delete _materias[idx];
	_materias.erase(_materias.begin() + idx);
	_numInventory--;
}

void					Character::use(int idx, ICharacter& target)
{
	if (idx >= _numInventory)
	{
		std::cout << "Character does not have inventory at index " << idx << std::endl;
		return ;
	}
	_materias[idx]->use(target);
}
