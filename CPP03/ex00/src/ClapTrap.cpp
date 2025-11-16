/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:08:29 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:08:07 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Default" ), _HP( 10 ), _EP( 10 ), _AD( 0 )
{
	std::cout << " ~ ClapTrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _HP( 10 ), _EP( 10 ), _AD( 0 )
{
	std::cout << " ~ ClapTrap Parametric Constructor called." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other )
{
	std::cout << " ~ ClapTrap Copy Constructor called." << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << " ~ ClapTrap Destructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &other )
{
	if ( this != &other )
	{	
		this->_name = other._name;
		this->_HP = other._HP;
		this->_EP = other._EP;
		this->_AD = other._AD;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (_HP <= 0 || _EP <= 0) {
		std::cout << "ClapTrap " << _name << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
	this->_EP -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_HP < amount) {
		std::cout << "ClapTrap " << _name << " is out of combat." << std::endl;
		_HP = 0;
		return ;
	}
	this->_HP -= amount;
	std::cout << "ClapTrap " << _name << " lost " << amount << " health points. New amount : " << _HP << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_HP += amount;
	this->_EP --;
	std::cout << "ClapTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}