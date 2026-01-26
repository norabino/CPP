/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:32:48 by norabino          #+#    #+#             */
/*   Updated: 2026/01/26 16:39:53 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
T const	&max( T const &a, T const &b )
{
	if ( a > b )
		return ( a );
	return ( b );
}

template <typename T>
T const &min( T const &a, T const &b )
{
	if ( a < b )
		return ( a );
	return ( b );
}

template <typename T>
void swap( T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
