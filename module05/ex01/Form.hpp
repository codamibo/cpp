/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 10:04:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 09:56:00 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		Form(void);
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		Form(const std::string name, int const gradeSign, int const gradeExecute);
		Form(Form const & cpy);
		~Form(void);
		Form &		operator=(Form const & rhs);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;

		void				beSigned(Bureaucrat const & b);
		void				signForm(Bureaucrat const & b);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "Grade is too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "Grade is too low";
				}
		};
		class FormAlreadySigned : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "Form is already signed";
				}
		};
};

std::ostream &		operator<<(std::ostream & output_stream, Form const & Form);

#endif
