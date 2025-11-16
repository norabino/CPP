/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:48:37 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:53:28 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap( void );
protected:
	std::string 	name_;
	int			hp_;
	int			ep_;
	int			ad_;
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