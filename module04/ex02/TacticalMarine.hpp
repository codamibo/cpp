/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 18:36:24 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 18:39:16 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ISpaceMarine.hpp"


class TacticalMarine : public ISpaceMarine{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & cpy);
		~TacticalMarine(void);
		TacticalMarine &	operator=(TacticalMarine const & rhs);
		ISpaceMarine*		clone(void) const;
		void				battleCry(void) const;
		void				rangedAttack(void) const;
		void				meleeAttack(void) const;
};

#endif
