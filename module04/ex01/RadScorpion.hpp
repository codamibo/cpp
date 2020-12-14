/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:31:16 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:09:26 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & cpy);
		virtual ~RadScorpion(void);
		RadScorpion &		operator=(RadScorpion const & rhs);
};

std::ostream &				operator<<(std::ostream & output_stream, RadScorpion const & RadScorpion);

#endif

