/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:16:41 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/09 15:25:38 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

//define member functions

// Phonebook::Phonebook(void)
// {
// 	std::cout << "constructor is called" << std::endl;
// 	return ;
// }

// Phonebook::~Phonebook(void)
// {
// 	std::cout << "destructor is called" << std::endl;
// 	return ;
// }

// void			Phonebook::save_first_name(std::string s)
// {
// 	Phonebook::first_name = s;
// 	return ;
// }

void			Phonebook::save_last_name(std::string s)
{
	this->last_name = s;
	return ;
}

void			Phonebook::save_nickname(std::string s)
{
	this->nickname = s;
	return ;
}

void			Phonebook::save_login(std::string s)
{
	this->login = s;
	return ;
}

void			Phonebook::save_postal_address(std::string s)
{
	this->postal_address = s;
	return ;
}

void			Phonebook::save_email(std::string s)
{
	this->email = s;
	return ;
}

void			Phonebook::save_phone_number(std::string s)
{
	this->phone_number = s;
	return ;
}

void			Phonebook::save_birthday(std::string s)
{
	this->birthday = s;
	return ;
}

void			Phonebook::save_meal(std::string s)
{
	this->meal = s;
	return ;
}

void			Phonebook::save_underwear_color(std::string s)
{
	this->underwear_color = s;
	return ;
}

void			Phonebook::save_darkest_secret(std::string s)
{
	this->darkest_secret = s;
	return ;
}

std::string		Phonebook::get_first_name(void)
{
	return (this->first_name);
}

std::string		Phonebook::get_last_name(void)
{
	return (this->last_name);
}

std::string		Phonebook::get_nickname(void)
{
	return (this->nickname);
}

std::string		Phonebook::get_login(void)
{
	return (this->login);
}

std::string		Phonebook::get_postal_address(void)
{
	return (this->postal_address);	
}

std::string		Phonebook::get_email(void)
{
	return (this->email);
}

std::string		Phonebook::get_phone_number(void)
{
	return (this->phone_number);
}

std::string		Phonebook::get_birthday(void)
{
	return (this->birthday);
}

std::string		Phonebook::get_meal(void)
{
	return (this->meal);
}

std::string		Phonebook::get_underwear_color(void)
{
	return (this->underwear_color);
}

std::string		Phonebook::get_darkest_secret(void)
{
	return (this->darkest_secret);
}