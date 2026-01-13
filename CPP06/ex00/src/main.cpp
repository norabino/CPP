/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:06:45 by norabino          #+#    #+#             */
/*   Updated: 2026/01/09 17:21:44 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int ac, char **av)
{
	if ( ac == 2 )
		ScalarConverter::convert( av[1] );
	else
		std::cout << "Wrong syntax." << std::endl;
	return (0);
}