/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:38:10 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 16:59:27 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string	&stringREF = str;

	stringPTR = &str;

	std::cout << &str << " : The memory address of the string variable." << std::endl;
	std::cout << stringPTR << " : The memory address held by stringPTR." << std::endl;
	std::cout << &stringREF << " : The memory address held by stringREF."<< std::endl << std::endl;

	std::cout << str << " : The value of the string variable." << std::endl;
	std::cout << *stringPTR << " : The value pointed to by stringPTR." << std::endl;
	std::cout << stringREF << " : The value pointed to by stringREF." << std::endl;

	return (0);
}