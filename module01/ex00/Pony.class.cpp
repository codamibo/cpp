/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.class.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 15:50:10 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/10 17:28:51 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

Pony::Pony(void)
{
	return ;
}

Pony::~Pony(void){
	std::cout << "Pony class is deconstructed\n";
}

void			Pony::set_color(std::string s)
{
	this->color = s;
	return ;
}

void			Pony::set_length(int l)
{
	this->length = l;
	return ;
}

void			Pony::set_tail_length(int l)
{
	this->tail_length = l;
	return ;
}

std::string		Pony::get_color(void)
{
	return (this->color);
}

int				Pony::get_length(void)
{
	return (this->length);
}

int				Pony::get_tail_length(void)
{
	return (this->tail_length);
}
