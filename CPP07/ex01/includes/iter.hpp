/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:43:22 by norabino          #+#    #+#             */
/*   Updated: 2026/01/26 16:45:39 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T, typename F>
void iter( T *adress, const size_t length, F function )
{
	size_t i = 0;
	while ( i < length )
	{
		function( adress[i] );
		i++;	
	}
}