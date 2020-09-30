/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 19:53:18 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/30 22:06:59 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human bob;
	
	bob.action("melee", "bob2");
	bob.action("ranged", "bob2");
	bob.action("shout", "bob2");
	return (0);
}