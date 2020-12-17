/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:20:07 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/17 10:15:17 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) : Form(cpy)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	output_file;
	std::string		filename;

	try
	{
		Form::beExecuted(executor);
	}
	catch (std::exception & e)
	{
		throw ;
		return ;
	}
	filename = this->getTarget() + "_shrubbery";
	output_file.open(filename.c_str());
	if (output_file.is_open() == 0)
	{
		std::cout << "Could not open " << filename << std::endl;
	}
	else
	{
		for (int i = 0; i < 6; i++)
		{
			output_file <<
			"	   _-_" << std::endl <<
			"	/~~   ~~\"" << std::endl <<
			" /~~         ~~\"" << std::endl <<
			"|               |" << std::endl <<
			" \\  _-     -_  / " << std::endl <<
			"   ~  \\   /  ~" << std::endl <<
			"       | |" << std::endl <<
			"       | |" << std::endl <<
			"     \"/   \\\"" << std::endl <<
			std::endl << std::endl;
		}
	}
	return ;
}
