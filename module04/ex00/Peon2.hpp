/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon2.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 16:07:32 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 16:08:18 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON2_HPP
# define PEON2_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon2 : virtual public Victim{
	private:
		Peon2(void); // or Peon2(void) = delete; as public member

	public:
		Peon2(std::string name);
		Peon2(Peon2 const & cpy);
		~Peon2(void);
		Peon2 &		operator=(Peon2 const & rhs);

		void		getPolymorphed(void) const;
};

std::ostream &		operator<<(std::ostream & output_stream, Peon2 const &rhs);

#endif
