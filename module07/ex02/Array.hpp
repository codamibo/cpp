/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/06 14:19:05 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/06 21:20:35 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array{
	private:
		T				*_array;
		unsigned int	_n;

	public:
		~Array(void)
		{
			if (_array != NULL)
				delete[] _array;
		}

		Array(void) : _array(NULL), _n(0){ return ;};

		Array(unsigned int n) : _n(n)
		{
			_array = new T[n];
			for (int i = 0; i < static_cast<int>(_n); i++)
				_array[i] = '\0';
		};

		Array(Array const & cpy)
		{
			if (&cpy != this)
			{
				_array = new T[cpy.size()];
				for (int i = 0; i < static_cast<int>(cpy.size()); i++)
					_array[i] = cpy._array[i];
				_n = cpy.size();
			}
		}

		Array &			operator=(Array const & rhs)
		{
			if (&rhs != this)
			{
				delete (*this)._array;
				(*this)._array = new T[rhs.size()];
				for (int i = 0; i < static_cast<int>(rhs.size()); i++)
					(*this)._array[i] = rhs._array[i];
				(*this)._n = rhs.size();
			}
			return (*this);
		}

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				const char * what() const throw ()
				{
					return "Index out of bounds";
				}
		};

		T&			operator[](unsigned int index)
		{
			if (index >= _n)
			{
				throw IndexOutOfBoundsException();
			}
			else
				return(_array[index]);
		}

		unsigned int	size(void) const
		{
			return (_n);
		};
};

template < typename T >
std::ostream &	operator << ( std::ostream& output_stream, Array<T> & array)
{
	if (array.size() > 0)
	{
		for (int i = 0; i < static_cast<int>(array.size()); ++i )
			output_stream << array[i] << std::endl;
	}
	return (output_stream);
}

#endif
