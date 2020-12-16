/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 10:04:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 13:56:53 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const gradeSign, int const gradeExecute):
_name(name), _signed(0), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & cpy) :
_name(cpy._name), _signed(0), _gradeSign(cpy._gradeSign), _gradeExecute(cpy._gradeExecute)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &				Form::operator=(Form const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
	return (*this);
}

std::string const	Form::getName(void) const
{
	return (_name);
}

bool				Form::getSigned(void) const
{
	return (_signed);
}

int					Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int					Form::getGradeExecute(void) const
{
	return (_gradeExecute);
}

void				Form::beSigned(Bureaucrat const & b)
{
	if (_signed == 1)
		throw Form::FormAlreadySigned();
	else if (b.getGrade() <= _gradeSign)
		_signed = 1;
	else
		throw Form::GradeTooLowException();
}

void				Form::signForm(Bureaucrat const & b)
{
	try
	{
		beSigned(b);
	}
	catch (std::exception & e)
	{
		std::cout << b.getName() << " cannot sign " << _name << " because \"" << e.what() << "\"." << std::endl;
		return ;
	}
	std::cout << b.getName() << " signs " << _name << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, Form const & Form)
{
	output_stream << Form.getName() << " | grade to sign " << Form.getGradeSign();
	output_stream << " | grade to execute " << Form.getGradeExecute() << " | is ";
	if (Form.getSigned() == 1)
		output_stream << "signed." << std::endl;
	else
		output_stream << "not signed." << std::endl;
	return (output_stream);
}
