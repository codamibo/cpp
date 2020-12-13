/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/11 16:52:05 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/12 21:34:45 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	private:
		AMateria(void);
		std::string		_type;
		unsigned int	_xp;
	
	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria(AMateria const & cpy);
		AMateria &				operator=(AMateria const & rhs);
		std::string const &		getType(void) const; //Returns the materia type
		unsigned int			getXP(void) const; //Returns the Materia's XP
		void					setXP(unsigned int const XP);
		virtual AMateria*		clone(void) const = 0;
		virtual void 			use(ICharacter& target);
};

#endif
