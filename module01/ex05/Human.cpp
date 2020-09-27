/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 17:10:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/20 22:16:08 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Baby is born" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "Human died" << std::endl;
	return ;
}

std::string		Human::identify(void)
{
	return (this->brain.identify());
}

Brain			Human::getBrain(void)
{
	return (this->brain);
}
