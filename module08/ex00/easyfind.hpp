/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 10:48:15 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/12 11:06:57 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator		easyfind(T & container, int const find)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), find);
	if (it != container.end())
		return (it);
	throw std::runtime_error("Number is not found");
	return (it);
}

#endif
