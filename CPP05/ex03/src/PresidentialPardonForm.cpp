/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:32:00 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 19:06:44 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

/*required grades: sign 25, exec 5*/

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (!this->getSigned())
		throw AForm::AFormNotSigned();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();

	std::cout << executor.getName() << " executed " << this->getName() << " 🖥️" << std::endl;
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox. 🚔" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & other ) : AForm(other), _target(other._target)
{
}

const PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	AForm::operator=(other);
	_target = other._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return this->_target;
}