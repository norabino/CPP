/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:04:40 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:23:34 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_hpP
#define CLAPTRAP_hpP

#include <iostream>

class ClapTrap
{
private:
	ClapTrap( void );
	std::string 	_name;
	int			_hp;
	int			_ep;
	int			_ad;

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