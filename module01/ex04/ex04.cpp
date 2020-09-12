/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 16:10:55 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/12 17:05:46 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		s = "HI THIS IS BRAIN";
	std::string*	ptr = &s;
	std::string&	ref = s;

	std::cout << s << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}