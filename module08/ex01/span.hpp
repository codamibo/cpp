/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 11:36:44 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:35:57 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span{
	private:
		Span(void);
		std::vector<int>	_array;
		unsigned int		_n;
		unsigned int		_added;

	public:
		Span(unsigned int n);
		~Span(void);
		Span(Span const & cpy);
		Span &						operator=(Span const & rhs);
		void						addNumber(int n);
		int							shortestSpan(void);
		int							longestSpan(void);
		std::vector<int> const &	getArray(void) const;
		unsigned int				getAdded(void) const;
		void						addNumbersByRange(std::vector<int>::const_iterator it, std::vector<int>::const_iterator it_end);

		class						NotEnoughNumbersException : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "Too few numbers to find a span";
				}
		};
		class				NoSpaceLeftException : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "No space left to add another number";
				}
		};
};

std::ostream &				operator<<(std::ostream & output, Span const &rhs);

#endif
