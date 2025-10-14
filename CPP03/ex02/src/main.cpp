/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:45:08 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 14:54:12 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"


int	main( void )
{
	ClapTrap V1("allo");
	ScavTrap V2("bonjour");
	FragTrap V3("oui");

	V1.attack("bonjour");
	V2.takeDamage(90);
	V2.guardGate();
	V3.takeDamage(99);
	V3.highFivesGuys();
}