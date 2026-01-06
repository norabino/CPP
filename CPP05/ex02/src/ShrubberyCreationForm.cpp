/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:19:55 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 19:06:44 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned())
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();

	std::cout << executor.getName() << " executed " << this->getName() << " 🖥️"  << std::endl;

	std::ofstream fileOut;
	fileOut.open( ( (this->getTarget()) + "_shrubbery" ).c_str() );
	if ( !fileOut.good() )
	{
		std::cout << "Output file cannot be created.." << std::endl;
		return;
	}

	fileOut << "       _-_\n";
	fileOut << "    /~~   ~~\\\n";
	fileOut << " /~~         ~~\\\n";
	fileOut << "{               }\n";
	fileOut << " \\  _-     -_  /\n";
	fileOut << "   ~  \\\\ //  ~\n";
	fileOut << "_- -   | | _- _\n";
	fileOut << "  _ -  | |   -_\n";
	fileOut << "      // \\\\\n";

	fileOut << "\n";
	fileOut << "         /\\\n";
	fileOut << "        /  \\\n";
	fileOut << "       /    \\\n";
	fileOut << "      /      \\\n";
	fileOut << "     /________\\\n";
	fileOut << "        ||||\n";
	fileOut << "        ||||\n";

	fileOut.close();

}

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & other ) : AForm(other), _target(other._target)
{
}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return this->_target;
}