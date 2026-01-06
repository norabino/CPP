/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:14 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 16:53:13 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	Intern intern;
	AForm	*shrub;
	Bureaucrat Alice("Alice", 1);
	

	try {
		shrub = intern.makeForm("presidential pardon", "bisskou");
		Alice.signForm( *shrub );
		Alice.executeForm( *shrub );
		delete shrub;
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}