/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 10:18:21 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 11:10:31 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon{
	private:
		std::string			_name;
		int					_damage;
		int					_APCost;

	public:
		AWeapon(void);
		AWeapon(AWeapon const & cpy);
		virtual ~AWeapon(void);
		AWeapon &			operator=(AWeapon const & rhs);

		std::string const	getName(void) const;
		int					getDamage(void) const;
		int					getAPCost(void) const;
		void				setName(std::string const name);
		void				setDamage(const int damage);
		void				setAPCost(const int AP);
		virtual void		attack() const = 0;
};

#endif
