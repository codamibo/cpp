/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:18:43 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:27:33 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA{
	private:
		std::string			first_name;
		Weapon&				weaponRef; 
		//reference used here since object weapon is always here, from the
		//beginning and should always point to the same object
	
	public:
		HumanA(std::string s, Weapon& w);
		~HumanA(void);
		std::string const&	getWeaponType(void);
		std::string			getFirstName(void);
		void				setWeapon(Weapon w);
		void				attack(void);
};

#endif
