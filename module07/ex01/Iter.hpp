/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 22:37:11 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/06 12:58:13 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T , typename R >
void	iter(T *array, int len, R f(T))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template< typename A >
void	print(A arg)
{
	std::cout << arg << std::endl;
	return ;
}

template< typename B >
int		print_return(B arg)
{
	std::cout << arg << std::endl;
	return (1);
}

template< typename C >
C		print_template_return(C arg)
{
	std::cout << arg << std::endl;
	return (arg);
}

#endif
