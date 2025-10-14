/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:10 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:49:08 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal( void ) : type_( "" )
{
	std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal( AAnimal const & other )
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = other;
}

AAnimal const	&AAnimal::operator=( AAnimal const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called." << std::endl;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined AAnimal)" <<std::endl;
}

std::string AAnimal::getType( void ) const
{
	return (type_);
}