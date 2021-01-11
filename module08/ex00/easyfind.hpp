/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 10:48:15 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:56:21 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		const char * what() const throw ()
		{
			return "Number is not found";
		}
};

template <typename T>
typename T::const_iterator		easyfind(T const & container, int const find)
{
	typename T::const_iterator	it;

	it = std::find(container.begin(), container.end(), find);
	if (it != container.end())
		return (it);
	throw NotFoundException();
	return (it);
}

#endif
