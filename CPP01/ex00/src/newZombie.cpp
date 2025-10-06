/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:38:13 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 15:48:02 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name)
{
	Zombie *newZombie;
	newZombie = new Zombie(name);
	if (!newZombie)
		return (NULL);
	return (newZombie);
}