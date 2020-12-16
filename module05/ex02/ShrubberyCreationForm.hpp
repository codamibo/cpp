/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:20:05 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 14:34:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string type);
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &		operator=(ShrubberyCreationForm const & rhs);

		void						execute(Bureaucrat const & executor) const;
};

#endif
