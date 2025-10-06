/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:00:20 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 20:03:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Replace.hpp"

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (!parse(ac, filename, s1, s2))
		return (0);
	replace(filename, s1, s2);
	return (0);
}