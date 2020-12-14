/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Grenade.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 16:14:06 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:07:51 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRENADE_HPP
# define GRENADE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class Grenade : public AWeapon{
	public:
		Grenade(void);
		Grenade(Grenade const & cpy);
		virtual ~Grenade(void);
		Grenade &		operator=(Grenade const & rhs);

		void			attack() const;
};

std::ostream &			operator<<(std::ostream & output_stream, Grenade const &Grenade);

#endif
