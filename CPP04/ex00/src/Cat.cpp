/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:34 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:51:46 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void )
{
	this->type_ = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat( Cat const & other ) : Animal( other )
{
	*this = other;
	std::cout << "Cat constructor called." << std::endl;
}

Cat const	&Cat::operator=( Cat const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouu.." << std::endl;
}