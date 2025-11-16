/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:10 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:34:07 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( std::string t )
{
	std::cout << " ⚒️  Animal Parametric Constructor called." << std::endl;
	( void )t;
}


Animal::Animal( void ) : type_( "" )
{
	std::cout << " ⚒️  Animal Default Constructor called." << std::endl;
}

Animal::Animal( Animal const & other )
{
	std::cout << " ⚒️  Animal Copy Constructor called." << std::endl;
	*this = other;
}

Animal const	&Animal::operator=( Animal const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

Animal::~Animal( void )
{
	std::cout << " 🚧 Animal Destructor called." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined animal)" <<std::endl;
}

std::string Animal::getType( void ) const
{
	return (type_);
}