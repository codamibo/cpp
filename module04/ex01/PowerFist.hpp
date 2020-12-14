/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:18:31 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:09:22 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon{
	public:
		PowerFist(void);
		PowerFist(PowerFist const & cpy);
		virtual ~PowerFist(void);
		PowerFist &		operator=(PowerFist const & rhs);

		void				attack() const;
};

std::ostream &		operator<<(std::ostream & output_stream, PowerFist const &PowerFist);

#endif
