/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 11:37:42 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/18 12:13:32 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	private:
		int					raw_bits;
		static const int	frac_bits = 8;
	
	public:
		Fixed(void);
		Fixed(Fixed const & src); //copy constructor
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs); //assignment operator
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif