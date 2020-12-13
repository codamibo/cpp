/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 20:42:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/12 21:21:48 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include <vector>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character(void);
		int						_numInventory;
		std::vector<AMateria*>	_materias;
		std::string				_name;

	public:
		Character(std::string name);
		~Character(void);
		Character(Character const & cpy);
		Character &				operator=(Character const & rhs);
		std::string const &		getName(void) const;
		int						getCount(void) const;
		void					equip(AMateria* m);
		void 					unequip(int idx);
		void					use(int idx, ICharacter& target);
};

#endif
