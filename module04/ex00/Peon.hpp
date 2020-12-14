/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:46:17 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:06:48 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim{
	private:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(Peon const & cpy);
		virtual ~Peon(void);
		Peon &		operator=(Peon const & rhs);

		void		getPolymorphed(void) const;
};

std::ostream &		operator<<(std::ostream & output_stream, Peon const &rhs);

#endif
