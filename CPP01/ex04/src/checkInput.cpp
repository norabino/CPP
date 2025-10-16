/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:38:30 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 16:38:24 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int	checkInput( std::string filename, std::string s1 )
{
	if (filename.empty() || s1.empty())
	{
		std::cout << "Empty args ([filename] or [s1] must not be empty)." << std::endl;
		return (0);
	}
	return (1);
}