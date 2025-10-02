/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:47:58 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 18:06:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

int	is_whitespace( char c )
{
	if (c == ' ' || c == '\t' || c == '\f'
		|| c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
int	only_whitespace( std::string str )
{
	int	i = 0;
	
	while (i < (int)str.length())
	{
		if (!is_whitespace(str[i]))
        	return (0);
		i++;
	}
	return (1);
}

std::string	is_to_long( std::string input )
{
	if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");
	}
	return (input);
}

std::string	clear_string( std::string str )
{
	std::string result;
	size_t		i = 0;

	while (i < str.length())
	{
		if (str[i] >= 32 && str[i] <= 126)
			result += str[i];
		else if (str[i] == ' ' || str[i] == '\t')
			result += ' ';
		i++;
	}
	while (!result.empty() && result[0] == ' ')
		result.erase(0, 1);

	while (!result.empty() && result[result.length() - 1] == ' ')
		result.erase(result.length() - 1);
	return (result);
}

void	print_firstline( void )
{
	std::cout << std::endl << std::string(45, '-') << std::endl;
	std::cout << "|" << std::setw(10) << "Index" 
			<< "|" << std::setw(10) << "First Name" 
			<< "|" << std::setw(10) << "Last Name"
			<< "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << std::string(45, '-') << std::endl;
}