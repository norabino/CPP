/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:18:09 by norabino          #+#    #+#             */
/*   Updated: 2026/01/13 15:18:11 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer( void )
{
	std::cout << "Serializer default constructor called." << std::endl;
	
}

Serializer::Serializer( std::string a )
{
	std::cout << "Serializer parametric constructor called." << std::endl;
	(void)a;
}

Serializer::Serializer( Serializer const & other )
{
	std::cout << "Serializer copy constructor called." << std::endl;
	*this = other;
}

Serializer const	&Serializer::operator=( Serializer const &other )
{
	(void)other;
	return ( *this );
}

Serializer::~Serializer( void )
{
	std::cout << "Serializer destructor called." << std::endl;
}

uintptr_t Serializer::serialize( Data* ptr )
{
	uintptr_t ser_data = reinterpret_cast<uintptr_t>(ptr);
	return ( ser_data );
}

Data *Serializer::deserialize( uintptr_t raw )
{
	Data *ptr_data = reinterpret_cast<Data*>(raw);
	return ( ptr_data );
}