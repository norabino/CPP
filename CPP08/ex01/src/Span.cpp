/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:33:37 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 11:04:20 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span( void ) : _N ( 0 )
{
}

Span::Span( unsigned int N ) : _N ( N )
{
}

Span::Span( Span const & other )
{
	*this = other;
}

Span const	&Span::operator=( Span const &other )
{
	if ( this != &other )
	{
		this->_N = other._N;
		this->_container = other._container;
	}
	return ( *this );
}

Span::~Span( void )
{
}

void	Span::addNumber( int n )
{
	if ( _container.size() >= _N )
		throw FullContainerException();
	this->_container.push_back( n );
}

int Span::shortestSpan( void )
{
	if ( _container.size() <= 1 )
		throw NotEnoughNumbersException();

	std::vector<int> copy = _container;
	std::sort( copy.begin(), copy.end() );

	int min = copy[1] - copy[0];
	unsigned int i = 2;
	while (i < copy.size() )
	{
		if ( (copy[i] - copy[i - 1]) < min )
			min = (copy[i] - copy[i - 1]);
		i++;
	}
	return ( min );
}

int Span::longestSpan( void )
{
	if ( _container.size() <= 1 )
		throw NotEnoughNumbersException();

	std::vector<int> copy = _container;
	std::sort( copy.begin(), copy.end() );

	int max = copy[copy.size() - 1] - copy[0];
	return ( max );
}



