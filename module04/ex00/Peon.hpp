/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:46:17 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:12:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : virtual public Victim{
	private:
		Peon(void); // or Peon(void) = delete; as public member

	public:
		Peon(std::string name);
		Peon(Peon const & cpy);
		~Peon(void);
		Peon &		operator=(Peon const & rhs);

		void		getPolymorphed(void) const;
};

std::ostream &		operator<<(std::ostream & output_stream, Peon const &rhs);

#endif
