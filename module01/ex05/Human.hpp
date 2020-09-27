/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 17:10:14 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/27 23:29:03 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class	Human{
	private:
		Brain const			brain;
		
	public:
		Human(void);
		~Human(void);
		std::string 		identify(void);
		Brain				getBrain(void);
};

#endif
