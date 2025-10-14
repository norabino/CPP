/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:51 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:26:51 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called." << std::endl;
	this->type_ = "Dog";
	this->_Brain = new Brain();

}

Dog::Dog( Dog const & other ) : Animal( other )
{
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;

}

Dog const	&Dog::operator=( Dog const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called." << std::endl;
	delete( this->_Brain );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wwaaf.." << std::endl;
}