/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/15 11:52:38 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 11:11:50 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

class Bureaucrat{
	private:
		Bureaucrat(void);
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & cpy);
		~Bureaucrat(void);
		Bureaucrat &		operator=(Bureaucrat const & rhs);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		
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
};

std::ostream &				operator<<(std::ostream & output_stream, Bureaucrat const & bureaucrat);

#endif
