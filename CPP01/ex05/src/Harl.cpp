/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:17:38 by norabino          #+#    #+#             */
/*   Updated: 2025/10/07 14:22:48 by norabino         ###   ########.fr       */
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
	void (Harl::*pointer_function[4])(void)const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			(this->*pointer_function[i])();
		i++;
	}
}

void	Harl::_debug(void) const {
	std::cout << "msg DEBUG: __ Welcome Welcome __" << std::endl;
}


void	Harl::_info(void) const {
	std::cout << "msg INFO: Yhea ! " << std::endl;
}


void	Harl::_warning(void) const {
	std::cout << "msg WARNING: Of course ... " << std::endl;
}

void	Harl::_error(void) const {
	std::cout << "msg ERROR: OMG !! " << std::endl;
}