/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:49:19 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 14:45:49 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ), _name( name ), _HP( 100 ), _EP( 50 ), _AD( 20 )
{
	std::cout << "ScavTrap Constructor called." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other ) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called." << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called." << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &other )
{
	ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::attack( const std::string& target )
{
	if (_HP <= 0 || _EP <= 0) {
		std::cout << "ScavTrap " << _name << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
	this->_EP -= 1;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	if (_HP < amount) {
		std::cout << "ScavTrap " << _name << " is out of combat." << std::endl;
		_HP = 0;
		return ;
	}
	this->_HP -= amount;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	this->_HP += amount;
	this->_EP --;
	std::cout << "ScavTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << _name << " guard gate mode activated." << std::endl;
}