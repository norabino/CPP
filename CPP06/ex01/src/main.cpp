/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:18:17 by norabino          #+#    #+#             */
/*   Updated: 2026/01/13 15:19:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

void printData( const Data* data, const std::string& label )
{
	std::cout << "\n********** " << label << " **********" << std::endl;
	std::cout << "->> x: " << data->x << std::endl;
	std::cout << "->> y: " << data->y << std::endl;
	std::cout << "->> z: " << data->y << std::endl;
	std::cout << "->> id : " << data->id << std::endl;
	std::cout << "->> seed : " << data->seed << std::endl;
	std::cout << "->> password : " << data->password << std::endl;
}

int main( void )
{
	Data data = {
		888,					// x
		777,					// y
		555,					// z
		"alert__reaction",		// id
		"couple__grown",		// seed
		"jumpy___cream"			// pasword
	};

	printData( &data, "Before Serialization" );

	uintptr_t raw = Serializer::serialize( &data );
	std::cout << "\033[1;33m\nSerialized uintptr_t: " << "\033[0m" << raw << "  😎"  << std::endl;

	Data* ptr = Serializer::deserialize( raw );
	printData( ptr, "After Deserialization" );

	return ( 0 );
}