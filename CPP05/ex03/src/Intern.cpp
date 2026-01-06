/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:50:23 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 16:49:17 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern( void )
{
	std::cout << "New Intern created." << std::endl;
}

Intern::~Intern( void )
{
	//std::cout << "Intern deleted." << std::endl;
}

Intern::Intern( std::string nothing )
{
	(void)nothing;
}

Intern::Intern( Intern const &other )
{
	*this = other;
}

AForm	*makeShrubbery( std::string target )
{
	AForm *form = new ShrubberyCreationForm( target );
	std::cout << "ShrubberyCreationForm." << std::endl; 
	return (form);
}

AForm	*makeRobotomy( std::string target )
{
	AForm *form = new RobotomyRequestForm( target );
	std::cout << "RobotomyRequestForm." << std::endl; 
	return (form);
}

AForm	*makePresidential( std::string target )
{
	AForm *form = new PresidentialPardonForm( target );
	std::cout << "PresidentialPardonForm." << std::endl; 
	return (form);
}

AForm *Intern::makeForm( std::string formName, std::string target )
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(*formMakers[3])(std::string) = { makeShrubbery, makeRobotomy, makePresidential };

	int i = 0;
	while (formName != formNames[i] && i < 3)
		i++;
	if (i < 3)
	{
		std::cout << "Intern creates ";
		return ( formMakers[i](target) );
	}
	else
		throw AForm::NameInexistant();
	return ( NULL );
}
