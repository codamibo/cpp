/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:20:25 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 17:30:58 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string type);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm &		operator=(RobotomyRequestForm const & rhs);

	protected:
		void						execute(Bureaucrat const & executor) const;
};

#endif

