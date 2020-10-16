/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 17:09:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 16:06:14 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Initiating synaptic connections between neurons..." << std::endl;
	this->set_variables();
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Braindead" << std::endl;
	return ;
}

void				Brain::set_variables(void)
{
	std::stringstream buffer;

	buffer << this;
	this->address = buffer.str();
	this->frontal_lobe = 1;
	this->parietal_lobe = 1;
	this->occipital_lobe = 1;
	this->temporal_lobe = 1;
	this->brainstem = 1;
	this->cerebellum = 1;
	return ;	
}

std::string			Brain::identify(void) const
{	
	return (this->address);
}
