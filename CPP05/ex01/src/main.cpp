/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:14 by norabino          #+#    #+#             */
/*   Updated: 2025/11/07 15:59:05 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat alice("Alice", 12);
		std::cout << alice << std::endl;
		alice.IncrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat bob("Bob", 150);
		bob.DecrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat charlie("Charlie", 0);
	}
	catch (const std::exception &e)
	{
		std::cout<< e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat diana("Diana", 151);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat eve("Eve", 5);
		eve.IncrementGrade();
		eve.IncrementGrade();
		eve.IncrementGrade();
		eve.IncrementGrade();
		eve.IncrementGrade();
		eve.IncrementGrade();
		eve.DecrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return ( 0 );
}