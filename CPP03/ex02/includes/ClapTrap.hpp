/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:04:40 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:49:26 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	ClapTrap( void );
	std::string 	name_;
	int			hp_;
	int			ep_;
	int			ad_;

public:
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & other );
	~ClapTrap ( void );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	ClapTrap	&operator=( ClapTrap const &other );
};

#endif