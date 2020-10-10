/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 11:37:42 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/10 13:59:45 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	private:
		int					fp_value;
		static const int	frac_bits = 8;
	
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);	
};

#endif