/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 17:10:11 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/28 08:59:32 by iboeters      ########   odam.nl         */
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

//to not make copy of this->brain but reference to object
//so that brain will not be destructed here
Brain const&	Human::getBrain(void)
{
	Brain const& brainRef = this->brain;
	return (brainRef);
}
