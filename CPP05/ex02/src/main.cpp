/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:33:14 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 15:11:31 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat highGrade("Boss", 1);
	Bureaucrat midGrade("Employee", 50);
	Bureaucrat lowGrade("Intern", 150);

	ShrubberyCreationForm shrubbery("garden");
	RobotomyRequestForm robotomy("target");
	PresidentialPardonForm pardon("Criminal");

	try {
		highGrade.signForm(shrubbery);
		highGrade.executeForm(shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		midGrade.signForm(robotomy);
		highGrade.executeForm(robotomy);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		highGrade.signForm(pardon);
		highGrade.executeForm(pardon);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		lowGrade.signForm(pardon);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}