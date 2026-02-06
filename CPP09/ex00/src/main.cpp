/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:31 by norabino          #+#    #+#             */
/*   Updated: 2026/02/06 15:43:41 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cout << "Wrong usage. Try : ./btc [filename]." << std::endl;
		return ( 1 );
	}
	try
	{
		BitcoinExchange btc;
		btc.execute( av[1] );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}