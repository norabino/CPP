/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:10 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:27:10 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ) : type_( "" )
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal( Animal const & other )
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = other;
}

Animal const	&Animal::operator=( Animal const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "... (sound made by undefined animal)" <<std::endl;
}

std::string Animal::getType( void ) const
{
	return (type_);
}