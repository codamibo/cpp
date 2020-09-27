/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 17:09:45 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/20 22:12:19 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Brain{
	private:
		int				frontal_lobe;
		int				parietal_lobe;
		int				temporal_lobe;
		int				occipital_lobe;
		int				brainstem;
		int				cerebellum;
		std::string		address;

	public:
		Brain(void);
		~Brain(void);
		std::string			identify(void) const;
		void				set_variables(void);
};

#endif
