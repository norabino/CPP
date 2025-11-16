/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:45:08 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:34:33 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ClapTrap V1("allo");
	ScavTrap V2("bonjour");

	V1.attack("bonjour");
	V2.takeDamage(90);
	ScavTrap V3(V2);
	V3.takeDamage(15);
	V2.takeDamage(5);
	V2.attack("allo");
	V2.guardGate();
}