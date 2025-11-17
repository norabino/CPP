/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:34 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 16:24:45 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( std::string t )
{
	std::cout << " ⚒️  Cat Parametric Constructor called." << std::endl;
	if ( t == "Cat")
		this->type_ = t;
}


Cat::Cat( void )
{
	std::cout << " ⚒️  Cat Default Constructor called." << std::endl;
	this->type_ = "Cat";
}

Cat::Cat( Cat const & other ) : Animal( other )
{
	std::cout << " ⚒️  Cat Copy Constructor called." << std::endl;
	*this = other;
}

Cat const	&Cat::operator=( Cat const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

Cat::~Cat( void )
{
	std::cout << " 🚧 Cat Destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouu.." << std::endl;
}