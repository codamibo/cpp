/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 10:04:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 10:15:17 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string name, int const gradeSign, int const gradeExecute, const std::string target) :
_name(name), _signed(0), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _target(target)
{
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & cpy) :
_name(cpy._name), _signed(0), _gradeSign(cpy._gradeSign), _gradeExecute(cpy._gradeExecute), _target(cpy._target)
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

const std::string	Form::getName(void) const
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

const std::string	Form::getTarget(void) const
{
	return (_target);
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

void				Form::beExecuted(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExecute)
		throw Form::GradeTooLowException();
	if (_signed == 0)
		throw Form::FormIsNotSigned();
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
