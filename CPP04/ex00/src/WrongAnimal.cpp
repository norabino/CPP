/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:30:17 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:31:31 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type_( "" )
{
}

WrongAnimal::WrongAnimal( std::string type ) : type_( type )
{
}

WrongAnimal::WrongAnimal( WrongAnimal const & other )
{
	*this = other;
}

WrongAnimal const	&WrongAnimal::operator=( WrongAnimal const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

WrongAnimal::~WrongAnimal( void )
{
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined WrongAnimal)" <<std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (type_);
}