/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:30:17 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:51:46 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type_( "" )
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other )
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called." << std::endl;

}

WrongAnimal const	&WrongAnimal::operator=( WrongAnimal const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined WrongAnimal)" <<std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (type_);
}