/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:17:38 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 17:23:18 by norabino         ###   ########.fr       */
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
	while (i < 4 && level != levels[i])
        i++;

    switch (i)
    {
        case 0:
            (this->*pointer_function[0])();
            std::cout << std::endl;
            // fallthrough
        case 1:
            (this->*pointer_function[1])();
            std::cout << std::endl;
            // fallthrough
        case 2:
            (this->*pointer_function[2])();
            std::cout << std::endl;
            // fallthrough
        case 3:
            (this->*pointer_function[3])();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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