/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 22:10:45 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/30 22:57:17 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void)
{
	this->file_name = "file";
	std::cout << "Const called" << std::endl;
	return ;
}

Logger::~Logger(void)
{
	std::cout << "Dest called" << std::endl;
	return ;
}

void			Logger::logToConsole(std::string const s)
{
	std::cout << s;
	return ;
}

void			Logger::logToFile(std::string const s)
{
	std::ofstream	file;

	file.open(this->file_name, std::ios_base::app); //append instead of overwrite
	if (!file.is_open())
	{
		file.close();
		return ;
	}
	file << s;
	file.close();
	return ;
}

std::string		Logger::makeLogEntry(std::string message)
{
	time_t		now;
	std::string ret;

	now = time(0);
	ret = "<";
	ret = ret + strtok(ctime(&now), "\n");
	ret = ret + ">" + "\t" + message + "\n";
	return (ret);
}

void			Logger::log(std::string const & dest, std::string const & message)
{
	int		member;

	member = 0;
	void (Logger::* const members[2])(std::string const s) = {
		&Logger::logToConsole,
		&Logger::logToFile,
	};
	if (dest.compare("Console") == 0)
		member = 0;
	else if (dest.compare("File") == 0)
		member = 1;
	else
		return ;
	(this->*members[member])(this->makeLogEntry(message));
	return ;
}