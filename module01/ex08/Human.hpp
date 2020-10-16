/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 19:53:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 16:44:15 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human{
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);

	public:
		Human(void);
		~Human(void);
		void action(std::string const & action_name, std::string const & target);
};

#endif