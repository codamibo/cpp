/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 17:08:39 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/09 17:16:16 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string* panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;
	delete panther;
}
