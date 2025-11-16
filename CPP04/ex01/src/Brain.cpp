/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:50 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:38:12 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain( void )
{
	std::cout << " ⚒️  Brain Constructor called." << std::endl;
}

Brain::Brain( Brain const & other )
{
	std::cout << " ⚒️  Brain Copy Constructor called." << std::endl;
	*this = other;
}

Brain::~Brain( void )
{
	std::cout << " 🚧 Brain Destructor called." << std::endl;
}

Brain const &Brain::operator=( Brain const & other )
{
	if ( this != &other )
	{
		int	i = 0;
		while (i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}
