/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/07 14:56:35 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/11 21:13:54 by iboeters      ########   odam.nl         */
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
		MutantStack(MutantStack<T> const & cpy) : std::stack<T>(cpy)
		{
			return ;
		};
		MutantStack &			operator=(MutantStack<T> const & rhs){
			std::stack<T>::operator=(rhs);
			return (*this);
		};

		typedef typename std::stack<T>::container_type::iterator				iterator; //container_type = type of underlying container
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
	
		iterator				begin(void)
		{
			return (this->c.begin()); //c is a protected member of stack holding the underlying container
		};
		iterator				end(void)
		{
			return (this->c.end());
		};
		const_iterator			begin(void) const
		{
			return (this->c.begin());
		};
		const_iterator			end(void) const
		{
			return (this->c.end());
		};
		reverse_iterator		rbegin(void)
		{
			return (this->c.rbegin());
		};
		reverse_iterator		rend(void)
		{
			return (this->c.rend());
		};
		const_reverse_iterator	rbegin(void) const
		{
			return (this->c.rbegin());
		};
		const_reverse_iterator	rend(void) const
		{
			return (this->c.rend());
		};
	private:
};

#endif
