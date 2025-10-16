/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:12:23 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:24:28 by norabino         ###   ########.fr       */
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
	return (NULL);
}
