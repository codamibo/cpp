/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:27:30 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/09 15:18:41 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	show_menu(int welcome_text)
{
	if (welcome_text)
		std::cout << std::endl << "\033[1;35mWelcome to the AWESOME PHONEBOOK...\033[0m\n";
	std::cout << std::endl << "\033[1;35m---------------Phonebook menu----------------\033[0m" << std::endl;
	std::cout << std::setfill (' ') << std::setw (35) << std::left;
	std::cout << "For adding contacts type:";
	std::cout << std::setfill (' ') << std::setw (10) << std::right;
	std::cout << "ADD" << std::endl;
	std::cout << std::setfill (' ') << std::setw (35) << std::left;
	std::cout << "For searching contacts type:";
	std::cout << std::setfill (' ') << std::setw (10) << std::right;
	std::cout << "SEARCH" << std::endl;
	std::cout << std::setfill (' ') << std::setw (35) << std::left;
	std::cout << "For exiting the program type:";
	std::cout << std::setfill (' ') << std::setw (10) << std::right;
	std::cout << "EXIT" << std::endl;
	std::cout << std::endl << "Your choice: ";
}

int		main(void)
{
	int			index;
	Phonebook 	phone[CONTACT_MAX];
	std::string input;
	
	show_menu(1);
	index = 0;
	MyClass myObj;     // Create an object of MyClass
  	myObj.myMethod(4);  // Call the method
	// MyClass::myMethod(4);
  	while (1)
	{
		// std::cin.clear();
		getline(std::cin, input, '\n'); // \n is delimiter
		if (input.compare("ADD") == 0)
		{
			if (index < CONTACT_MAX)
			{
				phone[index] = add_contact();
				index++;
			}
			else
				std::cout << "\033[1;31mMaximum number of contacts reached!\033[0m" << std::endl;
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else if (input.compare("SEARCH") == 0)
			search_contacts(phone, index);
		else
			std::cout << "\033[1;31mWrong input...\033[0m" << std::endl;
		show_menu(0);
	}
	return (0);
}

/*
// when EXIT, destruct classes:
//
//index = 8;
// while (i < index)
// {
// 	phone[i].~Phonebook();
// 	i++;
// }
*/