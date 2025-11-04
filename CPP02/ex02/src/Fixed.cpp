/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:56:01 by norabino          #+#    #+#             */
/*   Updated: 2025/11/04 20:50:47 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
}

Fixed::Fixed( const int val )  
{
	std::cout << "Int constructor called" << std::endl;
	if (val <= (INT_MAX / (1 << _fracBits)) && val >= (INT_MIN / (1 << _fracBits)))
        _value = val << this->_fracBits;
    else
    {
        this->_value = 0;
        std::cout << "Warning: Int value " << val << " is out of range for " 
            << _fracBits << "-bit fixed-point representation, set to 0" << std::endl;
	}
}

Fixed::Fixed( const float val )
{
	std::cout << "Float constructor called" << std::endl;
	if (val <= (INT_MAX / (1 << _fracBits)) && val >= (INT_MIN / (1 << _fracBits)))
        _value = roundf(val *(1 << this->_fracBits));
    else
    {
        this->_value = 0;
        std::cout << "Warning: Float value " << val << " is out of range for " 
            << _fracBits << "-bit fixed-point representation, set to 0" << std::endl;
	}
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