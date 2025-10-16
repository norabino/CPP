/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:47:26 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:30:54 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), type(NULL)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::setWeapon( Weapon &weapon)
{
	this->type = &weapon;
}

void	HumanB::attack( void )
{
	if ( this->type )
		std::cout << this->_name << " attacks with their " << this->type->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have any weapon.. " << std::endl;
	
}
