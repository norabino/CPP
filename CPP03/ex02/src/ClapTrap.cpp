/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:08:29 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:46:11 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name_( "Default" ), hp_( 10 ), ep_( 10 ), ad_( 0 )
{
	std::cout << " ⚒️  ClapTrap Default Constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name_( name ), hp_( 10 ), ep_( 10 ), ad_( 0 )
{
	std::cout << " ⚒️  ClapTrap Parametric Constructor called." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other )
{
	std::cout << " ⚒️  ClapTrap Copy Constructor called." << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << " 🚧 ClapTrap Destructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &other )
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

void	ClapTrap::attack( const std::string& target )
{
	if (hp_ <= 0 || ep_ <= 0) {
		std::cout << "ClapTrap " << name_ << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
	this->ep_ -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (hp_ < (int)amount) {
		std::cout << "ClapTrap " << name_ << " is out of combat." << std::endl;
		hp_ = 0;
		return ;
	}
	this->hp_ -= amount;
	std::cout << "ClapTrap " << name_ << " lost " << amount << " health points. New amount : " << hp_ << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	this->hp_ += amount;
	this->ep_ --;
	std::cout << "ClapTrap " << name_ << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}