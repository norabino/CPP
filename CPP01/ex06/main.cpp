/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:49:04 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 15:21:04 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong format." << std::endl;
		return (1);
	}
	std::string level = av[1];
	if (!av[1] || level.empty())
	{
		std::cout << "Wrong format for inputed level." << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(level);
	return (0);
}