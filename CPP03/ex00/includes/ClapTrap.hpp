/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:04:40 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 12:51:31 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	ClapTrap( void );
	std::string 	_name;
	unsigned int			_HP;
	unsigned int			_EP;
	unsigned int			_AD;

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