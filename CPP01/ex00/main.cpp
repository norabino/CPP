/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:44:33 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 16:05:26 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main( void )
{
	Zombie	parent_zombie("parent_Zombie");

	Zombie	*child_zombie;

	child_zombie = newZombie("child_Zombie");

	child_zombie->announce();
	parent_zombie.announce();

	randomChump("random_zombie");

	delete child_zombie;
	return (0);
}