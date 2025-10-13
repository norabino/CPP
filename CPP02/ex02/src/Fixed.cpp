/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:01 by norabino          #+#    #+#             */
/*   Updated: 2025/10/13 15:29:32 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
}

Fixed::Fixed( const int value ) : _value(value << _fracBits)
{
}

Fixed::Fixed( const float value ) : _value(roundf(value * (1 << _fracBits)))
{
}

Fixed::Fixed( Fixed const &other )
{
	*this = other;
}

Fixed::~Fixed( void )
{
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << _fracBits));
}

Fixed	&Fixed::operator=( Fixed const& other )
{
	this->_value = other._value;
	return ( *this );
}

bool	Fixed::operator<( Fixed const& other )
{
	if (this->_value < other._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=( Fixed const& other )
{
	if (this->_value <= other._value)
		return (true);
	return (false);
}

bool	Fixed::operator>( Fixed const& other )
{
	if (this->_value > other._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const& other )
{
	if (this->_value >= other._value)
		return (true);
	return (false);
}

bool	Fixed::operator==( Fixed const& other )
{
	if (this->_value == other._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const& other )
{
	if (this->_value != other._value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+( Fixed const& other )
{
	Fixed	temp;

	temp._value = this->_value + other._value;
	return (temp);
}

Fixed	Fixed::operator-( Fixed const& other )
{
	Fixed	temp;

	temp._value = this->_value - other._value;
	return (temp);
}

Fixed	Fixed::operator*( Fixed const& other )
{
	Fixed	temp;

	temp._value = (this->_value * other._value) >> _fracBits;
	return (temp);
}

Fixed	Fixed::operator/( Fixed const& other )
{
	Fixed	temp;

	if (other._value == 0)
	{
		std::cout << "DIVISION BY ZERO ! ";
		std::cout << "Result could be inexact." << std::endl;
		return (0);
	}
	temp._value = (this->_value << _fracBits) / other._value;
	return (temp);
}

Fixed& Fixed::operator++( void )
{
	this->_value += 1;
	return (*this);
}

// ++a
Fixed Fixed::operator++( int )
{
	Fixed tmp_instance(*this);
	this->_value += 1;
	return (tmp_instance);
}

// a--
Fixed& Fixed::operator--( void )
{
	this->_value -= 1;
	return (*this);
}

// --a
Fixed Fixed::operator--( int )
{
	Fixed tmp_instance(*this);
	this->_value -= 1;
	return (tmp_instance);
}


Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	if ( a < b )
		return (a);
	return (b);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	if ( a > b )
		return (a);
	return (b);
}

Fixed	const &Fixed::min( Fixed const &a, Fixed const &b )
{
	if ( a._value < b._value )
		return (a);
	return (b);
}

Fixed	const &Fixed::max( Fixed const &a, Fixed const &b )
{
	if ( a._value > b._value )
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, Fixed const& a)
{
	os << a.toFloat();
	return (os);
}