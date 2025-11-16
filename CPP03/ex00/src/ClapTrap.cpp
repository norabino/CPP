/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:08:29 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:23:48 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Default" ), _hp( 10 ), _ep( 10 ), _ad( 0 )
{
	std::cout << " ~ ClapTrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _hp( 10 ), _ep( 10 ), _ad( 0 )
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
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_ad = other._ad;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target )
{
	if (_hp <= 0 || _ep <= 0) {
		std::cout << "ClapTrap " << _name << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	this->_ep -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hp < (int)amount) {
		std::cout << "ClapTrap " << _name << " is out of combat." << std::endl;
		_hp = 0;
		return ;
	}
	this->_hp -= amount;
	std::cout << "ClapTrap " << _name << " lost " << amount << " health points. New amount : " << _hp << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_hp += amount;
	this->_ep --;
	std::cout << "ClapTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}