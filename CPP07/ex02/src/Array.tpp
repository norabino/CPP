/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:20:51 by norabino          #+#    #+#             */
/*   Updated: 2026/01/27 16:14:24 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array( void )
{
	std::cout << "Array default constructor called." << std::endl;
	this->_array = NULL;
	this->_size = 0;
}

template <typename T>
Array<T>::Array( unsigned int n )
{
	std::cout << "Array parametric constructor called." << std::endl;
	this->_array = new T[n]();
	this->_size = n;

}
template <typename T>
Array<T>::Array( Array const & other )
{
	std::cout << "Array copy constructor called." << std::endl;
	this->_array = NULL;
	this->_size = 0;
	*this = other;
}

template <typename T>
Array<T> const	&Array<T>::operator=( Array const &other )
{
	if (this != &other)
	{
		if (_array)
			delete[] _array;
		this->_array = new T[other._size];
		this->_size = other._size;

		unsigned int i = 0;
		while ( i < this->_size )
		{
			this->_array[i] = other._array[i];
			i++;
		}
	}
	return ( *this );	
}

template <typename T>
Array<T>::~Array( void )
{
	std::cout << "Array destructor called." << std::endl;
	if (_array)
		delete[] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw std::out_of_range("Index out of bounds..");
	return ( _array[n] ); 
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= _size) 
		throw std::out_of_range("Index out of bounds..");
	return ( _array[n] );
}

template <typename T>
unsigned int Array<T>::size() const
{
	return ( _size );
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& array)
{
	unsigned int i = 0;
	os << "Array(size=" << array.size() << ")[";
	while( i < array._size )
	{
		os << array._array[i];
		if (i < array._size - 1)
			os << ", ";
		i++;
	}
	os << "]";
	return ( os );
}
