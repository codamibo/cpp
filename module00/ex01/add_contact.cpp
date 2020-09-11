/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_contact.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:19:13 by iboeters      #+#    #+#                 */
/*   Updated: 2020/07/28 22:35:04 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook	add_contact()
{
	Phonebook		contact;
	std::string		s;

	std::cout << "First name: ";
	getline(std::cin, s, '\n');
	contact.save_first_name(s);
	std::cout << "Last name: ";
	getline(std::cin, s, '\n');
	contact.save_last_name(s);
	std::cout << "Nickname: ";
	getline(std::cin, s, '\n');
	contact.save_nickname(s);
	std::cout << "Login: ";
	getline(std::cin, s, '\n');
	contact.save_login(s);
	std::cout << "Postal address: ";
	getline(std::cin, s, '\n');
	contact.save_postal_address(s);
	std::cout << "Email address: ";
	getline(std::cin, s, '\n');
	contact.save_email(s);
	std::cout << "Phone number: ";
	getline(std::cin, s, '\n');
	contact.save_phone_number(s);
	std::cout << "Birthday date: ";
	getline(std::cin, s, '\n');
	contact.save_birthday(s);
	std::cout << "Favorite meal: ";
	getline(std::cin, s, '\n');
	contact.save_meal(s);
	std::cout << "Underwear color: ";
	getline(std::cin, s, '\n');
	contact.save_underwear_color(s);
	std::cout << "Darkest secret: ";
	getline(std::cin, s, '\n');
	contact.save_darkest_secret(s);
	return (contact);
}