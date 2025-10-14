/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:34 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:07:41 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void )
{
	this->type_ = "Cat";
}

Cat::Cat( Cat const & other ) : Animal( other )
{
	*this = other;
}

Cat const	&Cat::operator=( Cat const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Cat::~Cat( void )
{
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouu.." << std::endl;
}