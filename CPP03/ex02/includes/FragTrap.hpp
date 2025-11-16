/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:36:45 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:53:41 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap( void );
protected:
	std::string 	name_;
	int			hp_;
	int			ep_;
	int			ad_;
public:
	FragTrap( std::string name );
	FragTrap( FragTrap const & other );
	~FragTrap( void );

	FragTrap	&operator=( FragTrap const &other );
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	void	highFivesGuys();
};

#endif