/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 16:06:02 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 13:53:45 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void		ponyOnTheHeap(std::string color, int length, int tail_length)
{
	Pony *p1 = new Pony;

	(*p1).set_color(color);
	(*p1).set_length(length);
	(*p1).set_tail_length(tail_length);
	std::cout << (*p1).get_color() << std::endl << (*p1).get_length() << std::endl << (*p1).get_tail_length() << std::endl;
	delete p1;
}

void		ponyOnTheStack(std::string color, int length, int tail_length)
{
	Pony p2;
	
	p2.set_color(color);
	p2.set_length(length);
	p2.set_tail_length(tail_length);
	std::cout << p2.get_color() << std::endl << p2.get_length() << std::endl << p2.get_tail_length() << std::endl;
}

int		main(void)
{
	ponyOnTheHeap("black", 135, 50);
	// std::cout << p2.get_color();
	ponyOnTheStack("red", 145, 70);
	// std::cout << p1.get_color();
	return (0);
}
