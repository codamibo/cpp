/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:20:42 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 17:31:21 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string type);
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

	protected:
		void						execute(Bureaucrat const & executor) const;
};

#endif
