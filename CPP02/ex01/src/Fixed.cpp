/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:59:15 by norabino          #+#    #+#             */
/*   Updated: 2025/11/04 20:43:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << _fracBits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> _fracBits);
}


Fixed	&Fixed::operator=( Fixed const& other )
{
	std::cout << "Operator = called" << std::endl;
	this->_value = other._value;
	return ( *this );
}

std::ostream& operator<<(std::ostream& os, Fixed const& a)
{
	os << a.toFloat();
	return (os);
}