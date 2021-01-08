/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serialization.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 22:07:15 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/08 10:23:46 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(void)
{
	std::srand(rand() + time(0));
	return ;
}

Serialization::~Serialization(void)
{
	return ;
}

Serialization::Serialization(Serialization const & cpy)
{
	if (&cpy != this)
	{
		*this = cpy;
	}
	return ;
}

Serialization &		Serialization::operator=(Serialization const & rhs)
{
	if (&rhs != this)
	{
		*this = rhs;
	}
	return (*this);	
}

void 				*Serialization::serialize(void)
{
	char *ret = new char[20]; //16 bytes for 2x8 characters + 4 bytes for int

	char const *alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	float fraction = 1 / static_cast<float>(RAND_MAX);
	int index;
	std::cout << "new s1: ";
	for (int i = 0; i < 20; i++)
	{
		if (i == sizeof(char) * 8)
		{
			std::cout << std::endl;
			std::cout << "new s2: ";
			i += sizeof(int);
		}
		index = ((fraction * std::rand()) * 62);
		ret[i] = alphanum[index];
		std::cout << alphanum[index];
	}
	int i = rand() % std::numeric_limits<int>::max();
	std::cout << std::endl << "new n = " << i << std::endl;
	reinterpret_cast<int *>(ret)[2] = i;
	return (reinterpret_cast<void *>(ret));
}

Data				*Serialization::deserialize(void *raw)
{
	Data *ret = new Data;

	ret->s1 = std::string(static_cast<char *>(raw), 8);
	ret->n = reinterpret_cast<int *>(raw)[2];
	ret->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
	return (ret);
}
