/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:01:50 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 11:15:56 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & cpy);
		~PlasmaRifle(void);
		PlasmaRifle &		operator=(PlasmaRifle const & rhs);

		void				attack() const;
};

std::ostream &		operator<<(std::ostream & output_stream, PlasmaRifle const &PlasmaRifle);

#endif
