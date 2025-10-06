/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:47:26 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 18:53:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::setWeapon( Weapon &weapon)
{
	this->_WeaponType = &weapon;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_WeaponType->getType() << std::endl;
}
