/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: iboeters <iboeters@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 22:10:37 by iboeters      #+#    #+#                 */
/*   Updated: 2020/09/30 22:53:06 by iboeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string.h>
#include <fstream>

#ifndef LOGGER_HPP
# define LOGGER_HPP

class Logger{
	private:
		std::string		file_name;
		void			logToConsole(std::string const s);
		void			logToFile(std::string const s);
		std::string		makeLogEntry(std::string const message);

	public:
		Logger(void);
		~Logger(void);
		void			log(std::string const & dest, std::string const & message);
};

#endif