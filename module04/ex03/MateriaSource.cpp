/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 12:01:33 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 16:41:46 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _numLearned(0)
{
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _numLearned; i++)
		delete _learnedMaterias[i];
	_learnedMaterias.clear();
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

MateriaSource &				MateriaSource::operator=(MateriaSource const & rhs)
{
	if (&rhs != this)
	{
		for (int i = 0; i < _numLearned; i++)
			delete _learnedMaterias[i];
		_learnedMaterias.clear();
		_numLearned = 0;
		for (int i = 0; i < rhs.getNumLearned(); i++)
		{
			(*this).learnMateria(rhs._learnedMaterias[i]->clone());
		}
	}
	return (*this);
}

int						MateriaSource::getNumLearned(void) const
{
	return (_numLearned);
}

void					MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	if (_numLearned == 4)
	{
		std::cout << "MateriaSource already has 4 learned materias" << std::endl;
		return ;
	}
	_learnedMaterias.push_back(m);
	_numLearned++;
	return ;
}

AMateria*				MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _numLearned; i++)
	{
		if (type == _learnedMaterias[i]->getType())
			return (_learnedMaterias[i]->clone());
	}
	std::cout << "Type " << type << " is unknown" << std::endl;
	return (0);
}
