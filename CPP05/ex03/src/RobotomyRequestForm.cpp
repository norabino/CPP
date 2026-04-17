/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:28:20 by norabino          #+#    #+#             */
/*   Updated: 2026/04/17 11:05:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

/*required grades: sign 72, exec 45*/

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned())
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();

	std::cout << executor.getName() << " executed " << this->getName() << " 🖥️" << std::endl;

	std::cout << "Grrrrrr... Drrrrrrr... *drilling noises* 🪛" << std::endl;

	static bool seeded = false;
	if (!seeded)
	{
		srand(time(NULL));
		seeded = true;
	}
	int nb = rand() % 2;
	if (nb)
		std::cout << this->getTarget() << " has been robotomized successfully! ✅" << std::endl;
	else
		std::cout << "The robotomy failed on " << this->getTarget() << ". ☠️" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & other ) : AForm(other), _target(other._target)
{
}

const RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return this->_target;
}