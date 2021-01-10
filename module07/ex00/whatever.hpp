/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 17:42:30 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/10 17:19:21 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void 	swap(T &t, T &t2)
{
	T tmp = t;
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
