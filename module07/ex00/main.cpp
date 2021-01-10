/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 17:42:26 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/10 16:50:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <iomanip>

int		main(void)
{
	std::cout << "\033[1;31mTest:	subject main (int and string)\033[0m" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\033[1;31m\nTest:	own tests (string and float)\033[0m" << std::endl;
	std::string str = "str";
	std::string str2 = "strr";
	::swap(str, str2);
	std::cout << "str = " << str << ", str2 = " << str2 << std::endl;
	std::cout << "min( str, str2 ) = " << ::min( str, str2 ) << std::endl;
	std::cout << "max( str, str2 ) = " << ::max( str, str2 ) << std::endl;

	std::cout << std::endl;
	float	e = 21.0f;
	float	f = 42.0f;
	std::cout << std::fixed << std::setprecision(1); //set a fixed precision of 1 for output stream
	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;	
	return (0);
}
