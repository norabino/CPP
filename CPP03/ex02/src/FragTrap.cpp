/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:39:07 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 14:45:52 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name ), _name( name ), _HP( 100 ), _EP( 100 ), _AD( 30 )
{
	std::cout << "FragTrap Constructor called." << std::endl;
}

FragTrap::FragTrap( FragTrap const &other ) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called." << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called." << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &other )
{
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::attack( const std::string& target )
{
	if (_HP <= 0 || _EP <= 0) {
		std::cout << "FragTrap " << _name << " can't do anything." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _AD << " points of damage!" << std::endl;
	this->_EP -= 1;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	if (_HP < amount) {
		std::cout << "FragTrap " << _name << " is out of combat." << std::endl;
		_HP = 0;
		return ;
	}
	this->_HP -= amount;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	this->_HP += amount;
	this->_EP --;
	std::cout << "FragTrap " << _name << " get repaired  causing " << amount << " energie points gained! " << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Fragtrap " << _name << " high fives his guys." << std::endl;
}