/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 14:58:04 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 19:42:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class	Zombie{
	private:
		std::string		type;
		std::string		name;

	public:
		Zombie(void);
		~Zombie(void);
		void			announce(void);
		void			setName(std::string);
		void			setType(std::string);
};

#endif
