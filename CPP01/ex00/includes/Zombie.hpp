/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:15:45 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 16:02:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE8HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie( std::string );
	~Zombie(void);
	void	announce( void );
private:
	std::string _name;
};

Zombie *newZombie( std::string name);
void	randomChump( std::string name);

#endif