/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 22:02:34 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/07 17:06:14 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int		main(void)
{
	Serialization	s;
	void 			*a;
	Data			*b;

	a = s.serialize();
	b = s.deserialize(a);
	std::cout << "s1: " << b->s1 << std::endl;
	std::cout << "n: " << b->n << std::endl;
	std::cout << "s2: " << b->s2 << std::endl;
	delete reinterpret_cast<char *>(a);
	delete b;
	return (0);
}
