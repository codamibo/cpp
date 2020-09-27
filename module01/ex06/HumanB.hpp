/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:18:41 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:27:42 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB{
	private:
		std::string			first_name;
		Weapon*				weaponPtr;
		//pointer here since object weapon may not exist in the beginning
		//and might point to another Weapon object later on
	
	public:
		HumanB(void);
		HumanB(std::string s);
		~HumanB(void);
		std::string const&	getWeaponType(void);
		std::string			getFirstName(void);
		void				setWeapon(Weapon& w);
		void				attack(void);
};

#endif
