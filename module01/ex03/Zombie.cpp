/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 14:58:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/11 20:03:06 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void){
	std::cout << "\033[1;31m---Zombie " << this->name << " is dying---\033[0m" << std::endl;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> BRAIINSSSS" << std::endl;
	return ;
}

void		Zombie::setName(std::string s)
{
	this->name = s;
	return ;
}

void		Zombie::setType(std::string s)
{
	this->type = s;
	return ;
}
