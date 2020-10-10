/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 11:37:47 by iboeters      #+#    #+#                 */
/*   Updated: 2020/10/10 13:59:19 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_value = 0;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_value);
}

void		Fixed::setRawBits(int const raw)
{
	this->fp_value = raw;
	return ;
}

Fixed &		Fixed::operator=(Fixed const & rsh)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fp_value = rsh.getRawBits();
	
	return (*this);
}
