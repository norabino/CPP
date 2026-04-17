/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:13:36 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 11:03:09 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"
#include <cctype>
#include <sys/stat.h>

BitcoinExchange::BitcoinExchange( void )
{
	_readDatabase();
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & other )
{
	*this = other;
}

BitcoinExchange const	&BitcoinExchange::operator=( BitcoinExchange const &other )
{
	if (this != &other)
		_exchangeMap = other._exchangeMap;
	return ( *this );
}

BitcoinExchange::~BitcoinExchange( void )
{
}

const char *BitcoinExchange::CannotOpenFileException::what() const throw()
{
	return ( "Error: could not open file given in argument." );
}

const char *BitcoinExchange::InvalidInputLineFormatException::what() const throw()
{
	return ( "Error: Invalid line format. Expected 'date,value'" );
}

const char *BitcoinExchange::InvalidDataLineFormatException::what() const throw()
{
	return ( "Error: Invalid line format. Expected 'date,exchange_rate'" );
}

const char *BitcoinExchange::InvalidDateFormatException::what() const throw()
{
	return ( "Error: Invalid date format. Expected 'YYYY-MM-DD'" );
}

const char *BitcoinExchange::InvalidPriceFormatException::what() const throw()
{
	return ( "Error: Invalid price format. Expected a number between 0.0 and 1000.0" );
}

void	BitcoinExchange::_readDatabase( void )
{
       std::ifstream file("data.csv");
        if (!file.is_open())
			throw CannotOpenFileException();

        std::string line;
        std::getline(file, line);
        if (line != "date,exchange_rate")
            throw InvalidDataLineFormatException();
        while (std::getline(file, line))
		{
            std::string date, price;
            std::istringstream ss(line);
            std::getline(ss, date, ',');
            std::getline(ss, price, ',');

            double btcPrice;
            std::istringstream priceStream( price );
            if (!(priceStream >> btcPrice))
				throw InvalidPriceFormatException();
            _exchangeMap[date] = btcPrice;
        }
        file.close();
}

bool	checkFile( std::string filename )
{
	struct	stat info;

	if ( stat(filename.c_str(), &info) )
		return ( false );
	if ( info.st_mode & S_IFDIR )
		return ( false );
	return ( true );
}

static std::string	trim( std::string const &str )
{
	size_t	start = 0;
	size_t	end = str.length();

	while ( start < end && std::isspace(static_cast<unsigned char>(str[start])) )
		start++;
	while ( end > start && std::isspace(static_cast<unsigned char>(str[end - 1])) )
		end--;
	return ( str.substr(start, end - start) );
}


bool	checkDate( std::string const &date )
{
	bool	valideDate = true;
	bool	impossibleDate = false;
	char	sep1;
	char	sep2;
	int 	year;
	int 	month;
	int		day;

    if ( date.length() != 10 )
		valideDate = false;
	else if ( date[4] != '-' || date[7] != '-' )
		valideDate = false;

    std::istringstream ss( date );
    ss >> year >> sep1 >> month >> sep2 >> day;

    if ( valideDate == true && (ss.fail() || sep1 != '-' || sep2 != '-') )
		valideDate = false;
    else if ( month < 1 || month > 12 )
		valideDate = false;
    else if ( day < 1 || day > 31 )
		valideDate = false;
	if ( valideDate == true )
	{
		int maxDays = 31;
		if ( month == 4 || month == 6 || month == 9 || month == 11 )
			maxDays = 30;
		else if ( month == 2 )
		{
			bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
			if ( isLeapYear )
				maxDays = 29;
			else
				maxDays = 28;
		}
		
		if ( day > maxDays )
		{
			valideDate = false;
			impossibleDate = true;
		}
	}
	if ( valideDate == false )
	{
		if ( impossibleDate )
			std::cout << "Error: impossible date => " << date << std::endl;
		else
			std::cout << "Error: bad input => " << date << std::endl;
	}
	return ( valideDate );
}

double	checkBtcAmount( std::string const &value )
{
	double	btcAmount;
	char	trailing;
	std::istringstream amountStream( value );

	if ( !( amountStream >> btcAmount) )
	{
		std::cout << "Error: bad input => " << value << std::endl;
		return ( -1 );
	}
	if ( amountStream >> trailing )
	{
		std::cout << "Error: bad input => " << value << std::endl;
		return ( -1 );
	}
	if ( btcAmount < 0 )
	{
		std::cout << "Error: not a positive number." << std::endl;
		return ( -1 );
	}
	else if ( btcAmount > 1000 )
	{
		std::cout << "Error: too large a number." << std::endl;
		return ( -1 );
	}
	return ( btcAmount );
}

void	BitcoinExchange::_displayExchangeResult( std::string const &date, double btcAmount )
{
	std::map<std::string, double>::iterator	it = _exchangeMap.find( date );

	if ( it != _exchangeMap.end() )
		std::cout << date << " => " << btcAmount << " = " << btcAmount * it->second << std::endl;
	else
	{
		std::map<std::string, double>::iterator it2 = _exchangeMap.lower_bound( date );
		if ( it2 == _exchangeMap.begin() && (it2 == _exchangeMap.end() || it2->first != date) )
			std::cout << date << " => " << btcAmount << " = " << btcAmount * it2->second << std::endl;
		else
		{
			if ( it2 == _exchangeMap.end() || it2->first != date )
				it2--;
			std::cout << date << " => " << btcAmount << " = " << btcAmount * it2->second << std::endl;
		}
	}
}

void BitcoinExchange::execute( std::string filename )
{
	if ( !checkFile( filename ))
		throw CannotOpenFileException();
	std::ifstream file;
	file.open( filename.c_str() );
	
	std::string line;
	std::getline( file, line );
	if ( line != "date | value" )
		throw InvalidInputLineFormatException();
	while ( std::getline( file, line ) )
	{
		size_t	sep = line.find(" | ");
		std::string	date;
		std::string	amount;

		if ( sep == std::string::npos || line.find('|', sep + 3) != std::string::npos )
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		date = trim(line.substr(0, sep));
		amount = trim(line.substr(sep + 3));

		if( date.empty() || amount.empty() )
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		if ( !checkDate( date ) )
			continue;
		
		double btcAmount = checkBtcAmount( amount );
		if ( btcAmount != -1 )
			_displayExchangeResult( date, btcAmount );
	}
}
