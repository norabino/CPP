/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:18:17 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 10:51:22 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

void printData( const Data* data, const std::string& label )
{
	std::cout << "\n********** " << label << " **********" << std::endl;
	std::cout << "->> x: " << data->x << std::endl;
	std::cout << "->> y: " << data->y << std::endl;
	std::cout << "->> z: " << data->z << std::endl;
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
	std::cout << "\nSerialized uintptr_t: " << raw << std::endl;

	Data* ptr = Serializer::deserialize( raw );
	std::cout << "Pointer equality test: " << (&data == ptr ? "OK" : "KO") << std::endl;
	printData( ptr, "After Deserialization" );

	return ( 0 );
}