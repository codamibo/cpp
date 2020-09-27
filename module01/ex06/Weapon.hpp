/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 22:19:01 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:27:18 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string			type;
		
	public:
		Weapon(void);
		Weapon(std::string s);
		~Weapon(void);
		std::string const&	getType(void);
		void				setType(std::string);
};

# endif
