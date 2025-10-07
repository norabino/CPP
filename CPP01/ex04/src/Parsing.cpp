/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:30:28 by norabino          #+#    #+#             */
/*   Updated: 2025/10/07 13:40:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int	parse(int ac, char **av)
{
	if ( ac != 4 )
	{
		std::cout << "Wrong usage." << std::endl;
		return (0);
	}
	std::string	filename;
	std::string	s1;
	std::string	s2;

	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Empty arg(s)" << std::endl;
		return (0);
	}
	if (!s1.compare(s2))
	{
		std::cout << "Same args" << std::endl;
		return (0);
	}
	return (1);
}