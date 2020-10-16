/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 19:53:13 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 16:45:41 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Const called" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "Dest called" << std::endl;
	return ;
}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack on " << target << std::endl;
	return ;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged attack on "<< target << std::endl;
	return ;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating shout to " << target << std::endl;
	return ;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	int i;
	int	member;
	
	i = 0;
	member = 0;
	void (Human::* const members[3])(std::string const & target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	if (action_name.compare("melee") == 0)
		member = 0;
	else if (action_name.compare("ranged") == 0)
		member = 1;
	else if (action_name.compare("shout") == 0)
		member = 2;
	else
		return ;
	(this->*members[member])(target);
	return ;
}
