/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:30:28 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 20:08:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int	parse(int ac, std::string filename, std::string s1, std::string s2)
{
	(void)filename;
	(void)s1;
	(void)s2;
	if ( ac != 4 )
	{
		std::cout << "Wrong usage." << std::endl;
		return (0);
	}
	return (1);
}