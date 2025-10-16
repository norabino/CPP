/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:21:59 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:26:39 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type)
{
}

Weapon::~Weapon( void )
{
}

std::string Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType(std ::string type)
{
	this->type = type;
}