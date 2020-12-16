/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy2.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/14 14:10:16 by iboeters      #+#    #+#                 */
/*   Updated: 2020/12/15 10:42:54 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy2.hpp"

Enemy2::Enemy2() : Enemy(100, "Enemy 2")
{
	std::cout << "Enemy2 born" << std::endl;
	return ;
}

Enemy2::Enemy2(Enemy2 const & cpy) : Enemy(cpy)
{
	return ;
}

Enemy2::~Enemy2(void)
{
	std::cout << "Enemy2 dying..." << std::endl;
	return ;
}

Enemy2 &		Enemy2::operator=(Enemy2 const & rhs)
{
	if (&rhs != this)
		Enemy::operator=(rhs);
	return (*this);
}

void				Enemy2::takeDamage(const int damage)
{
	Enemy::takeDamage(damage);
	return ;
}

std::ostream &		operator<<(std::ostream & output_stream, Enemy2 const &Enemy2)
{
	output_stream << Enemy2.getType() << "		| HP: " << Enemy2.getHP() << std::endl;
	return (output_stream);
}
