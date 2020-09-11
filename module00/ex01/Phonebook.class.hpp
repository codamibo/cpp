/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 14:16:39 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/09 15:25:44 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <string>

const int CONTACT_MAX = 8;

//declare class, its functions (methods) and its attributes (= variables)
class Phonebook{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email;
		std::string	phone_number;
		std::string birthday;
		std::string meal;
		std::string underwear_color;
		std::string darkest_secret;
	
	public:
		// Phonebook(void);
		// ~Phonebook(void);
		void			save_first_name(std::string s)
		{
			first_name = s;
			return ;
		}
		void			save_last_name(std::string);
		void			save_nickname(std::string);
		void			save_login(std::string);
		void			save_postal_address(std::string);
		void			save_email(std::string);
		void			save_phone_number(std::string);
		void			save_birthday(std::string);
		void			save_meal(std::string);
		void			save_underwear_color(std::string);
		void			save_darkest_secret(std::string);
		std::string		get_first_name(void);
		std::string		get_last_name(void);
		std::string		get_nickname(void);
		std::string		get_login(void);
		std::string		get_postal_address(void);
		std::string		get_email(void);
		std::string		get_phone_number(void);
		std::string		get_birthday(void);
		std::string		get_meal(void);
		std::string		get_underwear_color(void);
		std::string		get_darkest_secret(void);
		Phonebook(void){std::cout << "const called" << std::endl;};
		~Phonebook(void){std:: cout << "dest called" << std::endl;};
		
};

class MyClass {        // The class
  public:              // Access specifier
    void myMethod(int a) {  // Method/function defined inside the class
      std::cout << a;
    }
};

Phonebook	add_contact();
void	search_contacts(Phonebook phone[], int index);

#endif