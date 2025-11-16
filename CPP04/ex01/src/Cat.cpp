/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:34 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:51:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( std::string t )
{
	std::cout << " ⚒️  Cat Parametric Constructor called." << std::endl;
	( void )t;
}


Cat::Cat( void )
{
	std::cout << " ⚒️  Cat Default Constructor called." << std::endl;
	this->type_ = "Cat";
	this->_Brain = new Brain();
}

Cat::Cat( Cat const & other ) : Animal( other )
{
	std::cout << " ⚒️  Cat Copy Constructor called." << std::endl;
	*this = other;
}

Cat const	&Cat::operator=( Cat const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Cat::~Cat( void )
{
	delete(this->_Brain);
	std::cout << " 🚧 Cat Destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouu.." << std::endl;
}