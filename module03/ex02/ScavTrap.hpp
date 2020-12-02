/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:41 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/28 10:13:14 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(std::string n);
		ScavTrap(ScavTrap const & src); //copy constructor
		~ScavTrap(void);
		ScavTrap & 		operator=(ScavTrap const & rhs); //assignment operator

		void			challengeNewcomer(std::string const & target) const;
};

#endif
