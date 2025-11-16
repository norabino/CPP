/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:49:19 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:43:34 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : name_( "Default" ), hp_( 100 ), ep_( 50 ), ad_( 20 )
{
	std::cout << " ⚒️  ScavTrap Default Constructor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ), name_( name ), hp_( 100 ), ep_( 50 ), ad_( 20 )
{
	std::cout << " ⚒️  ScavTrap Parametric Constructor called." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other ) : ClapTrap(other)
{
	std::cout << " ⚒️  ScavTrap Copy Constructor called." << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << " 🚧 ScavTrap Destructor called." << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &other )
{
	if ( this != &other )
	{	
		this->name_ = other.name_;
		this->hp_ = other.hp_;
		this->ep_ = other.ep_;
		this->ad_ = other.ad_;
	}
	return (*this);
}

void	ScavTrap::attack( const std::string& target )
{
	if (hp_ <= 0 || ep_ <= 0) {
		std::cout << "ScavTrap " << name_ << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
	this->ep_ -= 1;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	if (hp_ < (int)amount) {
		std::cout << "ScavTrap " << name_ << " is out of combat." << std::endl;
		hp_ = 0;
		return ;
	}
	this->hp_ -= amount;
	std::cout << "ScavTrap " << name_ << " lost " << amount << " health points. New amount : " << hp_ << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	this->hp_ += amount;
	this->ep_ --;
	std::cout << "ScavTrap " << name_ << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << name_ << " guard gate mode activated." << std::endl;
}