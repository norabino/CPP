/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:45:08 by norabino          #+#    #+#             */
/*   Updated: 2025/10/13 18:00:30 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main( void )
{
	ClapTrap V1("allo");
	ScavTrap V2("bonjour");

	V1.attack("bonjour");
	V2.takeDamage(90);
	V2.guardGate();
}