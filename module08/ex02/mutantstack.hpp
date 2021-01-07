/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 14:56:35 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/07 15:30:01 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void)
		{
			return ;
		};
		~MutantStack(void)
		{
			return ;
		};
		MutantStack(MutantStack const & cpy)
		{
			if (&cpy != this)
				*this = cpy;
		};
		MutantStack &		operator=(MutantStack const & rhs)
		{
			if (&rhs != this)
				*this = rhs;
			return (*this);
		};
		typedef typename std::stack<T>::container_type::iterator		iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		};
		iterator	end(void)
		{
			return (this->c.end());
		};
};

#endif
