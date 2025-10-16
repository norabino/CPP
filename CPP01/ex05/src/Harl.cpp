/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:17:38 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:34:21 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*pointer_function[4])(void)const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			(this->*pointer_function[i])();
		i++;
	}
}

void	Harl::debug(void) const {
	std::cout << "msg DEBUG: __ Welcome Welcome __" << std::endl;
}


void	Harl::info(void) const {
	std::cout << "msg INFO: Yhea ! " << std::endl;
}


void	Harl::warning(void) const {
	std::cout << "msg WARNING: Of course ... " << std::endl;
}

void	Harl::error(void) const {
	std::cout << "msg ERROR: OMG !! " << std::endl;
}