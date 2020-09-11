/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:10:58 by iboeters      #+#    #+#                 */
/*   Updated: 2020/07/28 13:24:12 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int	len;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			len = ft_strlen(argv[i]);
			while (j < len)
			{
				std::cout << (unsigned char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
