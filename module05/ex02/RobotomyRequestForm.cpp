/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 11:20:27 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/16 14:20:07 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) : Form(cpy)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	float	index;
	float	fraction;

	try
	{
		Form::doExecute(executor);
	}
	catch (std::exception & e)
	{
		std::cout << executor.getName() << " cannot execute " << this->getName() << " because \"" << e.what() << "\"." << std::endl;
		return ;
	}
	std::cout << "* DRRRRRRRRRRRRRR *" << std::endl << "* DRRRRRRRRRRRRRR *" << std::endl << "* DRRRRRRRRRRRRRR *" << std::endl;
	std::srand(rand() + time(0));
	fraction = 1 / (float)RAND_MAX;
	index = (fraction * std::rand() * 2); // fraction * std::rand() gives random number between 0 and 1 * 2 gives number in range 0 -> 2
	if ((int)index == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
	}
	return ;
}
