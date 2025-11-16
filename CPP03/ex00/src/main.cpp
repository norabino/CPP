/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:45:08 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 13:10:28 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main( void )
{
	ClapTrap V1("allo");
	ClapTrap V2("bonjour");

	V1.attack("bonjour");
	V2.takeDamage(10);
	ClapTrap V3(V2);
	V3.attack("allo");
	V3.takeDamage(9);
}