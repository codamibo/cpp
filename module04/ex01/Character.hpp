/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:36:07 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 13:13:04 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character{
	private:
		Character(void);
		int					_AP;
		std::string			_name;
		AWeapon *			_weapon;

	public:
		Character(std::string const & name);
		Character(Character const & cpy);
		~Character(void);
		Character &				operator=(Character const & rhs);

		void				recoverAP(void);
		void				equip(AWeapon* weapon);
		void				attack(Enemy* en);
		std::string const	getName(void) const;
		int					getAP(void) const;
		AWeapon *			getAWeapon(void) const;
		void				setName(std::string const name);
		void				setAP(int AP);
};

std::ostream &				operator<<(std::ostream & output_stream, Character const & character);

#endif
