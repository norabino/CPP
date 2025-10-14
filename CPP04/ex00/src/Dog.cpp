/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:51 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:07:38 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void )
{
	this->type_ = "Dog";
}

Dog::Dog( Dog const & other ) : Animal( other )
{
	*this = other;
}

Dog const	&Dog::operator=( Dog const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Dog::~Dog( void )
{
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wwaaf.." << std::endl;
}