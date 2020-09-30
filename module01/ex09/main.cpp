/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 22:10:47 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/30 22:58:21 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger l;

	l.log("Console", "Hi");
	l.log("Console", "is");
	l.log("Console", "this");
	l.log("File", "being");
	l.log("File", "logged");
	l.log("File", "?");
	return (0);
}