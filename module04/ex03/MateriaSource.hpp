/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/13 12:01:30 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 12:21:45 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include <vector>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int						_numLearned;
		std::vector<AMateria*>	_learnedMaterias;
		
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(MateriaSource const & cpy);
		MateriaSource &			operator=(MateriaSource const & rhs);
		void					learnMateria(AMateria* m);
		AMateria*				createMateria(std::string const & type);
		int						getNumLearned(void) const;
};

#endif
