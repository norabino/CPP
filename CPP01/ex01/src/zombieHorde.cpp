/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:12:23 by norabino          #+#    #+#             */
/*   Updated: 2025/10/23 19:08:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ZombieHorde;
	int		i = 0;

	if (N > 0)
	{
		ZombieHorde = new Zombie[N];
		while ( i < N )
		{
			ZombieHorde[i].setName(name);
			i++;
		}
		return (ZombieHorde);
	}
	else
		std::cout << "Zombie number can't be less than one." << std::endl;
	return (NULL);
}
