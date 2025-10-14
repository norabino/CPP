/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:16:34 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:37:03 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called." << std::endl;
	this->type_ = "Cat";
	this->_Brain = new Brain();
}

Cat::Cat( Cat const & other ) : Animal( other )
{
	std::cout << "Cat constructor called." << std::endl;
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
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouu.." << std::endl;
}