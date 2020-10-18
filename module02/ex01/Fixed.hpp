/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 11:37:42 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/18 22:44:52 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int					raw_bits;
		static const int	frac_bits = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & 			operator=(Fixed const & rhs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream &				operator<<(std::ostream & output, Fixed const &rhs);

#endif
