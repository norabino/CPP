/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:27:05 by norabino          #+#    #+#             */
/*   Updated: 2025/10/23 19:08:54 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main( void )
{
	int	Nb_Horde = 0;
	int	i = 0;
	Zombie *ZombieHorde;

	ZombieHorde = zombieHorde(Nb_Horde, "allo");
	if ( ZombieHorde )
	{
		while (i < Nb_Horde )
		{
			ZombieHorde[i].announce();
			i++;
		}
		delete[] ZombieHorde;
	}
	return (0);
}