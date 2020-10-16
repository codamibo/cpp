/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 14:58:09 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 14:17:29 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s1, std::string s2) : type(s1), name(s2)
{
	Zombie::announce(); //or this->announce();
	return ;
}

Zombie::~Zombie(void){
	std::cout << "\033[1;31m---Zombie " << this->name << " is dying---\033[0m" << std::endl;
	return ;
}

void		Zombie::announce(void) const
{
	std::cout << "<" << this->name << " (" << this->type << ")> BRAIINSSSS" << std::endl;
	return ;
}
