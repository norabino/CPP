/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:45:47 by norabino          #+#    #+#             */
/*   Updated: 2026/01/30 14:23:58 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind( T &container, int target );

class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Target not found in container.\n");
		}
};

#include "../src/easyfind.tpp"