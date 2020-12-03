/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 09:21:08 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/03 17:16:35 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string n);
		NinjaTrap(NinjaTrap const & src); //copy constructor
		~NinjaTrap(void);
		NinjaTrap & 		operator=(NinjaTrap const & rhs); //assignment operator

		void	ninjaShoebox(ClapTrap &clap);
		void 	ninjaShoebox(ScavTrap &scav);
		void 	ninjaShoebox(FragTrap &frag);
		void 	ninjaShoebox(NinjaTrap &ninja);
	protected:
		static const int	_HP = 60;
		static const int	_MHP = 60;
		static const int	_EP = 120;
		static const int	_MEP = 120;
		static const int	_L = 1;
		static const int	_MAD = 60;
		static const int	_RAD = 5;
		static const int	_ADR = 0;
};

#endif
