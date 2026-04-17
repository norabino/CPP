/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:34:09 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 11:04:20 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>
#include <iterator>

class Span
{
private:
	unsigned int _N;
	std::vector<int> _container;

public:
	Span();
	Span( unsigned int N );
	Span(const Span &other);
	~Span();
	Span const &operator=(const Span &other);

	void addNumber( int );

	template <typename InputIterator>
	void addMultipleNumbers( InputIterator begin, InputIterator end )
	{
		const std::size_t count = static_cast<std::size_t>(std::distance(begin, end));
		if ( _container.size() + count > _N )
			throw FullContainerException();
		_container.insert( _container.end(), begin, end );
	}

	int shortestSpan( void );
	int longestSpan( void );

	class 	FullContainerException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ( "Container is full.\n" );
			}
	};
	class NotEnoughNumbersException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ( "Not enough number is container.\n" );
			}
	};
};
