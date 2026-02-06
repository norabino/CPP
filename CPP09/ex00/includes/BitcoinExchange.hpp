/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:43:03 by norabino          #+#    #+#             */
/*   Updated: 2026/02/06 16:00:37 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <exception>
# include <fstream>
# include <iostream>
# include <map>
# include <string>
# include <sstream>
#include <filesystem>
#include <sys/stat.h>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_exchangeMap;
		void	_readDatabase();
		bool	_valideDate( std::string const &date );
		double	_valideBtcAmount( std::string const &price );
		void	_displayExchangeResult( std::string const &date, double price );
		
	public:
		~BitcoinExchange();
		BitcoinExchange();
		BitcoinExchange( std::string );
		BitcoinExchange( BitcoinExchange const &other );
		BitcoinExchange const &operator=( BitcoinExchange const &other );

		void	execute( std::string fileName );

		class CannotOpenFileException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( "Error: could not open file given in argument." );
				}
		};
		
		class InvalidInputLineFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( "Error: Invalid line format. Expected 'date,value'" );
				}
		};

		class InvalidDataLineFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( "Error: Invalid line format. Expected 'date,exchange_rate'" );
				}
		};

		class InvalidDateFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( "Error: Invalid date format. Expected 'YYYY-MM-DD'" );
				}
		};

		class InvalidPriceFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ( "Error: Invalid price format. Expected a number between 0.0 and 1000.0" );
				}
		};
};
