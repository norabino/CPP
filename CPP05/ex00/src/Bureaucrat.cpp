/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:28:40 by norabino          #+#    #+#             */
/*   Updated: 2025/11/07 16:34:18 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	std::cout << "New Bureaucrat created." << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	//std::cout << "Bureaucrat deleted." << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name( name )
{
	if ( CheckGrade( grade ) == -1 )
	{
		std::cout << this->_name << "'s";
		throw Bureaucrat::GradeTooHighException();
	}
	if ( CheckGrade( grade ) == 1 )
	{
		std::cout << this->_name << "'s";
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
	std::cout << "New Bureaucrat "<< this->_name << " created." << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &other ) : _name( other._name ), _grade( other._grade )
{
}

int Bureaucrat::CheckGrade( int g)
{
	if ( g < 1 )
		return ( -1 );
	if ( g > 150 )
		return ( 1 );
	return ( 0 );
}

const Bureaucrat &Bureaucrat::operator=( const Bureaucrat &other )
{
	this->_grade = other._grade;
	return ( *this );
}

std::string const Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int	Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void	Bureaucrat::IncrementGrade()
{
	if ( CheckGrade( _grade - 1 ) == -1 )
	{
		std::cout << this->_name << "'s";
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << this->_name << "'s new grade is " << --this->_grade << "." << std::endl;
}

void	Bureaucrat::DecrementGrade()
{
	if ( CheckGrade( _grade + 1 ) == 1 )
	{
		std::cout << this->_name << "'s";
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << this->_name << "'s new grade is " << ++this->_grade << "." << std::endl;
}

std::ostream &operator<<( std::ostream &os, Bureaucrat const &instance )
{
	os << instance.getName() << ", bureaucrat grade " << instance.getGrade() << "." << std::endl;
	return ( os );
}