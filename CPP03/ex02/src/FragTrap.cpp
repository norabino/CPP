/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:39:07 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:45:35 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << " ⚒️  FragTrap Default Constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ), _name( name ), _hp( 100 ), _ep( 100 ), _ad( 30 )
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
	if (_hp <= 0 || _ep <= 0) {
		std::cout << "FragTrap " << _name << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
	this->_ep -= 1;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	if (_hp < (int)amount) {
		std::cout << "FragTrap " << _name << " is out of combat." << std::endl;
		_hp = 0;
		return ;
	}
	this->_hp -= amount;
	std::cout << "FragTrap " << name_ << " lost " << amount << " health points. New amount : " << hp_ << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	this->_hp += amount;
	this->_ep --;
	std::cout << "FragTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Fragtrap " << _name << " high fives his guys." << std::endl;
}