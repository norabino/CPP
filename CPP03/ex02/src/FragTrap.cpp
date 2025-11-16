/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:39:07 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:55:16 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << " ⚒️  FragTrap Default Constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ), name_( name ), hp_( 100 ), ep_( 100 ), ad_( 30 )
{
	std::cout << " ⚒️  FragTrap Parametric Constructor called." << std::endl;
}

FragTrap::FragTrap( FragTrap const &other ) : ClapTrap(other)
{
	std::cout << " ⚒️  FragTrap Copy constructor called." << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << " 🚧 FragTrap Destructor called." << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &other )
{
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::attack( const std::string& target )
{
	if (hp_ <= 0 || ep_ <= 0) {
		std::cout << "FragTrap " << name_ << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name_ << " attacks " << target << ", causing " << ad_ << " points of damage!" << std::endl;
	this->ep_ -= 1;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	if (hp_ < (int)amount) {
		std::cout << "FragTrap " << name_ << " is out of combat." << std::endl;
		hp_ = 0;
		return ;
	}
	this->hp_ -= amount;
	std::cout << "FragTrap " << name_ << " lost " << amount << " health points. New amount : " << hp_ << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	this->hp_ += amount;
	this->ep_ --;
	std::cout << "FragTrap " << name_ << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Fragtrap " << name_ << " high fives his guys." << std::endl;
}