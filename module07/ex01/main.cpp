/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 22:36:59 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/06 14:15:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	int				array[3] = {1, 2, 3};
	std::string		array2[3] = {"hoi", "hee", "hello"};
	float			array3[3] = {0.3f, 4.3f, 2.2f};

	std::cout << "\033[1;31mTest:	integer array\033[0m" << std::endl;
	iter<int, void>(array, 3, print); // or iter(array, 3, print_return<int>); otherwise won't compile
	std::cout << "\033[1;31mTest:	integer array with different return type\033[0m" << std::endl;
	iter<int, int>(array, 3, print_return);
	std::cout << "\033[1;31mTest:	integer array with template as return\033[0m" << std::endl;
	iter<int, int>(array, 3, print_template_return);
	std::cout << "\033[1;31mTest:	string array\033[0m" << std::endl;
	iter<std::string, void>(array2, 3, print);
	std::cout << "\033[1;31mTest:	float array\033[0m" << std::endl;
	iter<float, float>(array3, 3, print_template_return);
	return (0);
}
