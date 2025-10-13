/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:48:37 by norabino          #+#    #+#             */
/*   Updated: 2025/10/13 18:02:46 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap( void );
	std::string 	_name;
	unsigned int			_HP;
	unsigned int			_EP;
	unsigned int			_AD;
public:
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & other );
	~ScavTrap( void );

	ScavTrap	&operator=( ScavTrap const &other );
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	guardGate();
};

#endif