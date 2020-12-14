/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 17:59:21 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:22:22 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"


class Squad : public ISquad{
	private:
		int								_numUnits;
		std::vector<ISpaceMarine*>		_theSquad;

	public:
		Squad(void);
		Squad(Squad const & cpy);
		virtual ~Squad(void);
		Squad &							operator=(Squad const & rhs);
		int								getCount() const;
		ISpaceMarine*					getUnit(int) const;
		int								push(ISpaceMarine*);
};

#endif
