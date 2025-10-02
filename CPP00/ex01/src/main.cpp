/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:10:39 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 17:27:58 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"

int main( void )
{
	std::string input;
	Phonebook obj;

	std::cout << "Please enter a command (ADD, SEARCH, EXIT): " << std::endl;
	while (true)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			obj.add();
		else if (input == "SEARCH")
			obj.search();
	}
	return (0);
}