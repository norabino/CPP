/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 22:32:10 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 17:39:06 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fracBits = 8;

public:
    Fixed( void );
    Fixed( int );
    Fixed( Fixed const & );
	~Fixed( void );

	int	getRawBits( void ) const;
    void    setRawBits( int const raw );
	Fixed	&operator=( Fixed const & );
};

std::ostream& operator<<(std::ostream& os, Fixed const& a);

#endif