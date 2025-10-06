/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:21:59 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 18:06:31 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
}

Weapon::~Weapon( void )
{
}

std::string Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType(std ::string type)
{
	this->_type = type;
}