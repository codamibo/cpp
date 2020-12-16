/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 18:53:13 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 20:39:07 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & cpy);
		~Intern(void);
		Intern &		operator=(Intern const & rhs);

		Form*			makeForm(std::string name, std::string target);
		Form*			newPresidential(std::string target);
		Form*			newRobotomy(std::string target);
		Form*			newShrubbery(std::string target);
};

#endif
