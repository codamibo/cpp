/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 09:06:01 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/30 00:01:16 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

//	ifs = input file stream
//	./replace text class ---

int		ret(std::fstream* input_file, std::ofstream* output_file, std::string err)
{
	std::cout << err << std::endl;
	(*input_file).close();
	(*output_file).close();
	return (-1);
}

int		main(int argc, char **argv)
{
	std::string		s1, s2;
	std::fstream	input_file;
	std::ofstream	output_file;
	std::string		buffer;
	size_t			found, start;
	
	if (argc != 4)
		return(ret(&input_file, &output_file, "Wrong number of arguments"));
	s1 = argv[2];
	s2 = argv[3];
	input_file.open(argv[1]);
	output_file.open(strcat(argv[1], ".replace"));
	if (!(input_file.is_open()) || !(output_file.is_open()))
		return(ret(&input_file, &output_file, "Unable to open file"));
	while (getline(input_file, buffer))
	{
		start = 0;
		found = 0;
		while (found != std::string::npos)
		{
			found = buffer.find(s1, start);
			if (found != std::string::npos)
			{
				output_file << buffer.substr(start, found - start);
				start = found + s1.length();
				output_file << s2;
			}
			else
			 	output_file << buffer.substr(start, buffer.length() - start) << std::endl;			
		}
	}
	input_file.close();
	output_file.close();
	return (0);
}
