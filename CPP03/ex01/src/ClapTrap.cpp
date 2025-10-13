/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:08:29 by norabino          #+#    #+#             */
/*   Updated: 2025/10/13 18:03:16 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name( name ), _HP( 10 ), _EP( 10 ), _AD( 0 )
{
	std::cout << "ClapTrap Constructor called." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other )
{
	*this = other;
	std::cout << "ClapTrap Copy constructor called." << std::endl;
}

ClapTrap	& ClapTrap::operator=( ClapTrap const &other )
{
	this->_name = other._name;
	this->_HP = other._HP;
	this->_EP = other._EP;
	this->_AD = other._AD;
	return (*this);
}

ClapTrap::~ClapTrap ( void )
{
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
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->_HP += amount;
	this->_EP --;
	std::cout << "ClapTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}