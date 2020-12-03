/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/02 16:27:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/03 17:06:48 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap{
	public:
		SuperTrap(void);
		SuperTrap(std::string n);
		SuperTrap(SuperTrap const & src); //copy constructor
		~SuperTrap(void);
		SuperTrap & 		operator=(SuperTrap const & rhs); //assignment operator

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
};

#endif
