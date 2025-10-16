/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:00:20 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 16:41:30 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Replace.hpp"

int	main(int ac, char **av)
{

	if ( ac == 4 )
	{
		std::string	filename = av[1];
		std::string	s1 = av[2];
		std::string	s2 = av[3];
		if( !checkInput( filename, s1 ) )
			return (0);
		replace(filename, s1, s2);
	}
	else
		std::cout << "Wrong usage.." << std::endl << "Try : ./Replace [filename] [old char(s)] [new char(s)]" << std::endl;
	return (0);
}