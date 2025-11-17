/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:51 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 16:24:42 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( std::string t )
{
	std::cout << " ⚒️  Dog Parametric Constructor called." << std::endl;
	if ( t == "Dog")
		this->type_ = t;
}

Dog::Dog( void )
{
	std::cout << " ⚒️  Dog constructor called." << std::endl;
	this->type_ = "Dog";

}

Dog::Dog( Dog const & other ) : Animal( other )
{
	*this = other;
	std::cout << " ⚒️  Dog copy constructor called." << std::endl;

}

Dog const	&Dog::operator=( Dog const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

Dog::~Dog( void )
{
	std::cout << " 🚧 Dog Destructor called." << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof.." << std::endl;
}