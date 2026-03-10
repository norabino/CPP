/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:34:51 by norabino          #+#    #+#             */
/*   Updated: 2026/02/02 14:46:25 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{
	std::cout << "MutantStack default constructor called." << std::endl;
	
}

template <typename T>
MutantStack<T>::MutantStack( int )
{
	std::cout << "MutantStack parametric constructor called." << std::endl;
	
}

template <typename T>
MutantStack<T>::MutantStack( MutantStack const & other )
{
	std::cout << "MutantStack copy constructor called." << std::endl;
	std::stack<T>::operator=(other);
}

template <typename T>
MutantStack<T> const	&MutantStack<T>::operator=( MutantStack const &other )
{
	if ( this != &other )
		std::stack<T>::operator=(other);
	return ( *this );
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	std::cout << "MutantStack destructor called." << std::endl;
}

/*
this->c refers to the protected member variable of std::stack
which is the underlying container (typically std::deque by default).
This container holds the actual stack data and provides the iterator
functionality that std::stack normally hides. 
*/

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
	return ( this->c.rend() );
}

