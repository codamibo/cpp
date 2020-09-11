/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 16:06:02 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/09 17:03:28 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void		ponyOnTheHeap(std::string color, int length, int tail_length)
{
	Pony *iris;
	iris = new Pony();

	(*iris).set_color(color);
	(*iris).set_length(length);
	(*iris).set_tail_length(tail_length);
	std::cout << (*iris).get_color() << std::endl << (*iris).get_length() << std::endl << (*iris).get_tail_length() << std::endl;
	delete iris;
}

void		ponyOnTheStack(std::string color, int length, int tail_length)
{
	Pony steven;
	
	steven.set_color(color);
	steven.set_length(length);
	steven.set_tail_length(tail_length);
	std::cout << steven.get_color() << std::endl << steven.get_length() << std::endl << steven.get_tail_length() << std::endl;
}

int		main(void)
{
	ponyOnTheHeap("black", 135, 50);
	// std::cout << steven.get_color();
	ponyOnTheStack("red", 145, 70);
	// std::cout << iris.get_color();
	return (0);
}