/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:43:03 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 11:03:09 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <exception>
# include <fstream>
# include <iostream>
# include <map>
# include <sstream>
# include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_exchangeMap;
		void	_readDatabase();
		void	_displayExchangeResult( std::string const &date, double price );
		
	public:
		~BitcoinExchange();
		BitcoinExchange();
		BitcoinExchange( BitcoinExchange const &other );
		BitcoinExchange const &operator=( BitcoinExchange const &other );

		void	execute( std::string fileName );

		class CannotOpenFileException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class InvalidInputLineFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class InvalidDataLineFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class InvalidDateFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class InvalidPriceFormatException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};
