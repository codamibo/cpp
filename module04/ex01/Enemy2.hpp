/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy2.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 14:10:13 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/14 14:12:33 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY2_HPP
# define ENEMY2_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class Enemy2 : public Enemy{
	public:
		Enemy2(void);
		Enemy2(Enemy2 const & cpy);
		virtual ~Enemy2(void);
		Enemy2 &		operator=(Enemy2 const & rhs);

		void				takeDamage(const int damage);

};

std::ostream &		operator<<(std::ostream & output_stream, Enemy2 const & Enemy2);

#endif
