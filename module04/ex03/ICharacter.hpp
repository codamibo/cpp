/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 20:13:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/13 17:09:59 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(void) {}
		virtual std::string const &		getName(void) const = 0;
		virtual void					equip(AMateria* m) = 0;
		virtual void					unequip(int idx) = 0;
		virtual void					use(int idx, ICharacter& target) = 0;
};

#endif
