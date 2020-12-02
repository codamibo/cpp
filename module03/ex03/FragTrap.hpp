/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/20 23:14:39 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/01 17:00:24 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string n);
		FragTrap(FragTrap const & src); //copy constructor
		~FragTrap(void);
		FragTrap & 		operator=(FragTrap const & rhs); //assignment operator

		void			speedAttack(std::string const & target);
		void			deadAttack(std::string const & target);
		void			cyberAttack(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif
