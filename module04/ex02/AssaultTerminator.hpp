/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 19:02:57 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/11 16:41:55 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ISpaceMarine.hpp"


class AssaultTerminator : public ISpaceMarine{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &);
		~AssaultTerminator(void);
		AssaultTerminator &	operator=(AssaultTerminator const &);
		ISpaceMarine*		clone(void) const;
		void				battleCry(void) const;
		void				rangedAttack(void) const;
		void				meleeAttack(void) const;
};

#endif
