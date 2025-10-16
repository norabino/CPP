/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:27:05 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:24:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main( void )
{
	int	Nb_Horde = 5;
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