/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_contacts.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 22:28:44 by iboeters      #+#    #+#                 */
/*   Updated: 2020/07/30 13:09:09 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int		ft_strlen(std::string s)
{
	int len;

	while (s[len])
		len++;
	return(len);
}

void	show_contact(Phonebook phone[], int index)
{
	int		contact_nr;

	std::cout << "Type index to choose contact: ";
	std::cin >> contact_nr;
	if (std::cin.good() && contact_nr > 0 && contact_nr <= index + 1)
	{
		contact_nr--;
		std::cout << phone[contact_nr].get_first_name() << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cout << "\033[1;31mContact does not exist...\033[0m" << std::endl;
	}
}

void	search_menu(Phonebook phone[], int index)
{
	int				i;
	std::string 	first;
	std::string		last;
	std::string		nick;

	i = 0;
	std::cout << std::endl;
	while (i < index)
	{
		first = phone[i].get_first_name();
		last = phone[i].get_last_name();
		nick = phone[i].get_nickname();
		std::cout << std::setfill (' ') << std::setw (10) << std::right << i+1 << "|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		if (ft_strlen(first) <= 10)
			std::cout << phone[i].get_first_name() << "|";
		else
			std::cout << std::setw(9) << first.substr(0, 9) << ".|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		if (ft_strlen(last) <= 10)
			std::cout << phone[i].get_last_name() << "|";
		else
			std::cout << std::setw(9) << last.substr(0, 9) << ".|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		if (ft_strlen(nick) <= 10)
			std::cout << phone[i].get_nickname() << "|";
		else
			std::cout << std::setw(9) << nick.substr(0, 9) << ".|";
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
	show_contact(phone, index);
}

void	search_contacts(Phonebook phone[], int index)
{
	if (index > 0)
	{
		std::cout << std::endl;
		std::cout << std::endl << "\033[1;34m---------------Search menu------------------\033[0m" << std::endl;
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		std::cout << "Index";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		std::cout << "First name";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		std::cout << "Last name";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10) << std::right;
		std::cout << "Nickname";
		std::cout << "|";
		search_menu(phone, index);
	}
	else
		std::cout << "\033[1;31mPhonebook is empty!\033[0m" << std::endl;
}
