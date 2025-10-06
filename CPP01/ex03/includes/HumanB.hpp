/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:15:13 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 18:52:04 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB( std::string );
	~HumanB ( void );
	void	setWeapon( Weapon &weapon );
	void	attack(void);
private:
	std::string	_name;
	Weapon *_WeaponType;
};

#endif