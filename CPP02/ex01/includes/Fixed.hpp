/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:52:39 by norabino          #+#    #+#             */
/*   Updated: 2025/10/13 12:06:32 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int _value;
    static const int _fracBits = 8;

public:
    Fixed( void );
    Fixed( const int );
	Fixed( const float);
    Fixed( Fixed const & );
	~Fixed( void );

	float toFloat( void ) const;
	int   toInt( void ) const;
	Fixed	&operator=( Fixed const & );
};

std::ostream& operator<<(std::ostream& os, Fixed const& a);


#endif