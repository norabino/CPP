/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:59:40 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 16:24:14 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define Z

#include <iostream>

class Zombie
{
public:
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	void 	setName( std::string );
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );