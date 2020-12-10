/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 15:30:05 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:24:19 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim{
	private:
		Victim(void); // or Victim(void) = delete; as public member = c11 extension
		std::string _name;

	public:
		Victim(std::string name);
		Victim(Victim const & cpy);
		virtual ~Victim(void);
		Victim &		operator=(Victim const & rhs);
		
		std::string		get_name(void) const;
		void virtual	getPolymorphed(void) const;
};

std::ostream &			operator<<(std::ostream & output_stream, Victim const &rhs);

#endif
