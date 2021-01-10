/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/27 22:02:34 by iboeters      #+#    #+#                 */
/*   Updated: 2021/01/10 12:31:10 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>
#include <cstring>
#include <cstdlib> //rand

struct Data {
	std::string		s1;
	int 			n;
	std::string		s2;
};

void 	*serialize(void)
{
	void *ret = new char[52]; //24 bytes per string + 4 bytes for int

	std::string	s1;
	std::string s2;
	char const *alphanum = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	float fraction = 1 / static_cast<float>(RAND_MAX);
	int index;
	for (int i = 0; i < 16; i++)
	{
		index = ((fraction * std::rand()) * 62);
		if (i < 8)
			s1.push_back(alphanum[index]);
		else
			s2.push_back(alphanum[index]);
	}
	memcpy(ret, &s1, 24);
	memcpy(reinterpret_cast<char *>(ret) + 24 + 4, &s2, 24);
	int n = rand() % std::numeric_limits<int>::max();
	memcpy(reinterpret_cast<char *>(ret) + 24, &n, 4);
	std::cout << "Serialized s1: " << s1 << std::endl;
	std::cout << "Serialized n: " << n << std::endl;
	std::cout << "Serialized s2: " << s2 << std::endl;
	return (reinterpret_cast<void *>(ret));
}

Data	*deserialize(void *raw)
{	
	Data	*ret = new Data;

	ret->s1 = *(reinterpret_cast<std::string *>(raw));
	ret->n = reinterpret_cast<int *>(raw)[6];
	char *s2_ptr = reinterpret_cast<char *>(raw) + 24 + 4;
	ret->s2 = std::string(*(reinterpret_cast<std::string *>(s2_ptr)));
	return (ret);
}

int		main(void)
{
	void 	*a;
	Data	*b;

	std::srand(time(0));
	a = serialize();
	b = deserialize(a);
	std::cout << std::endl;
	std::cout << "s1: " << b->s1 << std::endl;
	std::cout << "n: " << b->n << std::endl;
	std::cout << "s2: " << b->s2 << std::endl;
	delete static_cast<int *>(a);
	delete b;
	return (0);
}
