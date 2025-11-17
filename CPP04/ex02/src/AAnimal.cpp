/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:01:47 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:02:11 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal( std::string t )
{
	std::cout << " ⚒️  AAnimal Parametric Constructor called." << std::endl;
	( void )t;
}


AAnimal::AAnimal( void ) : type_( "" )
{
	std::cout << " ⚒️  AAnimal Default Constructor called." << std::endl;
}

AAnimal::AAnimal( AAnimal const & other )
{
	std::cout << " ⚒️  AAnimal Copy Constructor called." << std::endl;
	*this = other;
}

AAnimal const	&AAnimal::operator=( AAnimal const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

AAnimal::~AAnimal( void )
{
	std::cout << " 🚧 AAnimal Destructor called." << std::endl;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined AAnimal)" <<std::endl;
}

std::string AAnimal::getType( void ) const
{
	return (type_);
}