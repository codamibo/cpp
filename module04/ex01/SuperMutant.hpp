/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 12:20:32 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:09:30 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & cpy);
		virtual ~SuperMutant(void);
		SuperMutant &		operator=(SuperMutant const & rhs);

		void				takeDamage(const int damage);

};

std::ostream &		operator<<(std::ostream & output_stream, SuperMutant const & SuperMutant);

#endif
