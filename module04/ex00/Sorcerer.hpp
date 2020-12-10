/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/08 16:28:24 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 10:13:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer{
	private:
		Sorcerer(void); // or Sorcerer(void) = delete; as public member
		std::string _name;
		std::string _title;

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & cpy);
		~Sorcerer(void);
		Sorcerer		operator=(Sorcerer const & rhs);
		
		std::string		get_name(void) const;
		std::string		get_title(void) const;
		void			polymorph(Victim const &) const;
};

std::ostream &			operator<<(std::ostream & output_stream, Sorcerer const &rhs);

#endif
