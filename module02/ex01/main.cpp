/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 11:29:42 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/10 14:47:43 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void)
{
	int		a = 9;
	int		b = 0;

	(void)a;
	b = a << 8;
	// printf("%.40f\n", );
	std::cout << b << std::endl;
	b = roundf(b / 2);
	std::cout << "na berekinging1: " << b << std::endl;
	b = roundf(b >> 8);
	std::cout << "na berekinging2: " << b << std::endl;
	std::cout << (float)a*2*2*2*2*2*2*2*2 << std::endl;
	return (0);
}