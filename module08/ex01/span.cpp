/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 11:36:45 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:52:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n), _added(0)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(Span const & cpy)
{
	if (&cpy != this)
	{
		_array = cpy._array;
		_n = cpy._n;
		_added = cpy._added;
	}
	return ;
}

Span &				Span::operator=(Span const & rhs)
{
	if (&rhs != this)
	{
		_array = rhs._array;
		_n = rhs._n;
		_added = rhs._added;
	}
	return (*this);
}

void				Span::addNumbersByRange(std::vector<int>::const_iterator it, std::vector<int>::const_iterator it_end)
{
	while (it != it_end && _added < _n)
	{
		_array.push_back(rand() % 100);
		_added++;
		it++;
	}
	if (_added == _n)
		throw NoSpaceLeftException();
}

void				Span::addNumber(int n)
{
	if (_added < _n)
	{
		_array.push_back(n);
		_added++;
	}
	else
		throw NoSpaceLeftException();
}

int					Span::shortestSpan(void)
{
	int 				span;

	if (_added <= 1)
		throw NotEnoughNumbersException();
	std::sort(_array.begin(), _array.end());
	span = _array[1] - _array[0];
	for (unsigned int i = 1; i < _added; i++)
	{
		if ((_array[i] - _array[i - 1]) < span)
			span = _array[i] - _array[i - 1];
	}
	return (span);
}

int					Span::longestSpan(void)
{
	if (_added <= 1)
		throw NotEnoughNumbersException();
	unsigned int min_index = distance(_array.begin(), std::min_element(_array.begin(), _array.end()));
	unsigned int max_index = distance(_array.begin(), std::max_element(_array.begin(), _array.end()));
	return (_array[max_index] - _array[min_index]);
}

std::vector<int> const &	Span::getArray(void) const
{
	return (_array);
}

unsigned int		Span::getAdded(void) const
{
	return (_added);
}

std::ostream &		operator<<(std::ostream & output, Span const &rhs)
{
	output << "Object: [";
	for (unsigned int i = 0; i < rhs.getAdded(); i++)
	{
		if (i == 0)
			output << rhs.getArray()[i];
		else
			output << "," << rhs.getArray()[i];
	}
	output << "]";
	return (output);
}
