/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:13:36 by norabino          #+#    #+#             */
/*   Updated: 2026/02/06 16:01:02 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
	_readDatabase();
	//std::cout << "BitcoinExchange default constructor called." << std::endl;
}

BitcoinExchange::BitcoinExchange( std::string )
{
	std::cout << "BitcoinExchange parametric constructor called." << std::endl;
	
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & other )
{
	std::cout << "BitcoinExchange copy constructor called." << std::endl;
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
	//std::cout << "BitcoinExchange destructor called." << std::endl;
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
		return ( std::cout << "File inexistant.." << std::endl, false );
	if ( info.st_mode & S_IFDIR )
		return ( std::cout << "The 'file' is a directory.." << std::endl, false );
	return ( true );
}

void	clearStr( std::string &str )
{
	size_t	i = 0;

	while ( i < str.length() )
	{
		if ( isspace(str[i]) )
			str.erase(i, 1);
		else
			i++;
	}
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
	std::istringstream amountStream( value );

	if ( !( amountStream >> btcAmount) )
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
		if ( it2 == _exchangeMap.begin() )
			std::cout << date << " => " << btcAmount << " = " << btcAmount * it2->second << std::endl;
		else
		{
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
		std::istringstream ss( line );
		std::string date;
		std::string amount;

		std::getline( ss, date, '|' );
		std::getline( ss, amount, '|' );

		clearStr( date );
		clearStr( amount );

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
