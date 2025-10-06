/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:07:03 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 18:42:48 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA( std::string, Weapon &weapon );
	~HumanA ( void );
	void	attack(void);
private:
	std::string	_name;
	Weapon& _WeaponType;
};

#endif