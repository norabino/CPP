/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:31:33 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:28:06 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), type(weapon)
{
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->type.getType() << std::endl;
}