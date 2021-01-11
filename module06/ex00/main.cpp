/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 16:58:44 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/10 13:14:10 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <limits>

//ascii 0-31 and > 126 are non-displayable characters

void	print_char(std::string input)
{
	char c = input[0];
	float f = static_cast<float>(c);
	int i = static_cast<int>(c);
	double d = static_cast<double>(c);
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	print_digit(std::string input, int inf_nan)
{
	long double input_num;

	sscanf(input.c_str(), "%Lf", &input_num);
	char c = static_cast<char>(input_num);
	int i = static_cast<int>(input_num);
	float f = static_cast<float>(input_num);
	double d = static_cast<double>(input_num);
	if (inf_nan == 1)
		std::cout << "char: impossible" << std::endl;
	else if (input_num < std::numeric_limits<char>::min() || input_num > std::numeric_limits<char>::max() || !isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	if (inf_nan == 1 || input_num < std::numeric_limits<int>::min()
	|| input_num > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if ((input_num < -(__FLT_MAX__) || input_num > __FLT_MAX__)
	&& inf_nan == 0)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if ((input_num < -(__DBL_MAX__) || input_num > __DBL_MAX__)
	&& inf_nan == 0)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

int			valid_digit(std::string input)
{
	unsigned int	i = 0;
	int				f = 0;
	int				d = 0;

	if (input[i] == '-' || input[i] == '+')
		i++;
	while (isdigit(input[i]))
	{
		i++;
		d = 1;
	}
	if (input[i] == '.' && d == 1)
	{
		i++;
		while (isdigit(input[i]))
			i++;
		if (input[i] == 'f')
		{
			i++;
			f = 1;
		}
	}
	if (f == 0)
	{
		while (isdigit(input[i]))
			i++;
	}
	if (i == input.length())
		return (1);
	return (0);
}

char		get_type(std::string input)
{
	if (input.length() == 1 && !isdigit(input[0]))
		return ('c');
	else if (valid_digit(input))
		return ('d');
	return ('x');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	int			inf_nan = 0;
	std::string input = argv[1];
	char		type = 'x';

	if (input.compare("nan") == 0 || input.compare("nanf") == 0 ||
	input.compare("inf") == 0 || input.compare("inff") == 0 ||
	input.compare("-inf") == 0 || input.compare("-inff") == 0)
	{
		inf_nan = 1;
		type = 'd';
	}
	else
		type = get_type(input);
	std::cout << std::fixed << std::setprecision(1); //set a fixed precision of 1 for output stream
	if (type == 'c')
		print_char(input);
	else if (type == 'd')
		print_digit(input, inf_nan);
	else
	{
		std::cout << "Invalid type" << std::endl;
		return (2);
	}
	return (0);
}
