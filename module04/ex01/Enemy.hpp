/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/10 11:23:14 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/10 11:32:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy{
	private:
		Enemy(void);
		std::string			_type;
		int					_HP;

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & cpy);
		virtual ~Enemy(void);
		Enemy &				operator=(Enemy const & rhs);

		std::string const	getType(void) const;
		int					getHP(void) const;
		void				setType(std::string const type);
		void				setHP(int HP);
		virtual void		takeDamage(const int damage);
};

#endif
