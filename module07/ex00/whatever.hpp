/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 17:42:30 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/06 14:25:12 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void 	swap(T &t, T &t2)
{
	T tmp;
	tmp = t;
	t = t2;
	t2 = tmp;
	return ;
}

template< typename U >
U const & 	min(U const & x, U const & y)
{
	return ((x < y) ? x : y);
}

template< typename V >
V const & 	max(V const & x, V const & y)
{
	return ((x > y) ? x : y);
}

#endif
