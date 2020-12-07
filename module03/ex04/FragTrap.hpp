/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:39 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/07 11:21:10 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const & src); //copy constructor
		~FragTrap(void);
		FragTrap & 		operator=(FragTrap const & rhs); //assignment operator

		void			speedAttack(std::string const & target);
		void			deadAttack(std::string const & target);
		void			cyberAttack(std::string const & target);
		void			shotgunAttack(std::string const & target);
		void			gasAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
	protected:
		static const int	_HP = 100;
		static const int	_MHP = 100;
		static const int	_EP = 100;
		static const int	_MEP = 100;
		static const int	_L = 1;
		static const int	_MAD = 30;
		static const int	_RAD = 20;
		static const int	_ADR = 5;
};

#endif
