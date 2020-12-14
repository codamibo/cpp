/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/12 14:55:28 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:23:26 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		virtual ~Cure(void);
		Cure(Cure const & cpy);
		Cure &		operator=(Cure const & rhs);
		Cure*		clone(void) const;
		void 		use(ICharacter& target);
};

#endif
