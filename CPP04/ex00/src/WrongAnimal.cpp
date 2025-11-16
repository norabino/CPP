/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:20:56 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:24:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string t )
{
	std::cout << " ⚒️  WrongAnimal Parametric Constructor called." << std::endl;
	( void )t;
}


WrongAnimal::WrongAnimal( void ) : type_( "" )
{
	std::cout << " ⚒️  WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other )
{
	std::cout << " ⚒️  WrongAnimal Copy Constructor called." << std::endl;
	*this = other;
}

WrongAnimal const	&WrongAnimal::operator=( WrongAnimal const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << " 🚧 WrongAnimal Destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined WrongAnimal)" <<std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (type_);
}