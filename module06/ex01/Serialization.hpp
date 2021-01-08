/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 22:07:17 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/08 10:08:05 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstring>
#include <cstdlib> //rand

struct Data {
	std::string		s1;
	int 			n;
	std::string		s2;
};

class Serialization
{
	public:
		Serialization(void);
		~Serialization(void);
		Serialization(Serialization const & cpy);
		Serialization &		operator=(Serialization const & rhs);
		void *				serialize(void);
		Data *				deserialize(void *raw);
};

#endif
