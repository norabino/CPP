/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:09:53 by norabino          #+#    #+#             */
/*   Updated: 2026/01/30 14:27:14 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>

template <typename T>
typename T::iterator easyfind( T &container, int target )
{
	typename T::iterator result;

	result = std::find(container.begin(), container.end(), target);
	if (result == container.end() )
		throw NotFoundException();
	
	return ( result );
}