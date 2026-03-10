/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:49:00 by norabino          #+#    #+#             */
/*   Updated: 2026/03/10 13:54:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int	main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cout << "Usage: ./RPN \"3 4 +\"" << std::endl;
		return ( 1 );
	}
	try
	{
		RPN	rpn( av[1] );
	}
	catch ( std::exception &e )
	{
		std::cerr << e.what() << std::endl;
		return ( 1 );
	}
	return ( 0 );
}