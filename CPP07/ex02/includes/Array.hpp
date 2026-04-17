/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:31:39 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 10:49:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
	T	*_array;
	unsigned int _size;

public:
	Array();
	Array( unsigned int n );
	Array(const Array &other);
	~Array();

	Array const &operator=(const Array &other);

	T &operator[](unsigned int n);
	const T &operator[](unsigned int n) const;

	unsigned int size() const;
};


#include "../src/Array.tpp"