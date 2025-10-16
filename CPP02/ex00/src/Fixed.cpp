/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 23:52:59 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 17:44:53 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

}

void    Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}


int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

Fixed	&Fixed::operator=( Fixed const& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = other.getRawBits();
	return ( *this );
}

std::ostream& operator<<(std::ostream& os, Fixed const& a)
{
	os << a.getRawBits();
	return (os);
}