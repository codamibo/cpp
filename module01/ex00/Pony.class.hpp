/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.class.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 15:45:18 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/10 17:28:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONY_CLASS_H
# define PHONY_CLASS_H

#include <iostream>
#include <string>

class	Pony{
	private:
		std::string		color;
		int				length;
		int				tail_length;

	public:
		Pony(void);
		~Pony(void);
		void			set_color(std::string s);
		void			set_length(int l);
		void			set_tail_length(int l);
		std::string		get_color(void);
		int				get_length(void);
		int				get_tail_length(void);
};

#endif
