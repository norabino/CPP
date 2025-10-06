/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:38:13 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 16:03:12 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie( std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie(name);
	if (!newZombie)
		return (NULL);
	return (newZombie);
}