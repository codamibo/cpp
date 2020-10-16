/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 00:21:43 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/16 17:24:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

int			main(int argc, char **argv)
{
	std::string s;
	int			i;
	std::string	buffer;
	int			first;
	int			second;
	
	i = 1;
	first = 0;
	second = 0;
	if (argc == 1)
	{
		while (1)
		{
			getline(std::cin, s);
			if (s.length() == 0)
			{
				std::cout << std::endl;
				break ;
			}
			std::cout << s << std::endl;
		}
	}
	else
	{
		while (argv[i])
		{
			if (second == 0)
				second = 1;
			else
				std::cout << std::endl;
			std::ifstream file(argv[i]);
			if (!file.is_open())
			{
				std::cout << "cato9tails: " << argv[i] << ": No such file or directory";
				file.close();
			}
			while (getline(file, buffer))
			{
				if (first == 0)
					first = 1;
				else
					std::cout << std::endl;			
				std::cout << buffer;
			}
			first = 0;
			i++;
			file.close();
		}
		std::cout << std::endl;
	}
	return (0);
}
