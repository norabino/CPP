/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 13:21:06 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 18:15:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"
#include "../includes/Bureaucrat.hpp"

AForm::AForm( void ) : _name("Default"), _signed(false), _signGrade( 150 ), _execGrade( 150 )
{
}

AForm::~AForm( void )
{
}

AForm::AForm( std::string n, int sg, int eg ) : _name( n ), _signed( false ), _signGrade( sg ), _execGrade( eg )
{
	if (CheckGrade( sg ) == -1 || CheckGrade( eg ) == -1)
		throw AForm::GradeTooHighException();
	if (CheckGrade( sg ) == 1 || CheckGrade( eg ) == 1)
		throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const &other ) : _name( other._name ),  _signed( other._signed ), _signGrade( other._signGrade ), _execGrade( other._execGrade )
{
}

const AForm &AForm::operator=( const AForm &other )
{
	_signed = other._signed;
	return ( *this );
}

void AForm::beSigned( Bureaucrat &instance )
{
	if ( _signed == true )
		throw AForm::AFormAlreadySigned();
	if ( instance.getGrade() > this->_signGrade )
		throw AForm::GradeTooLowException();
	_signed = true;
}

int AForm::CheckGrade( int g)
{
	if ( g < 1 )
		return ( -1 );
	if ( g > 150 )
		return ( 1 );
	return ( 0 );
}

std::string AForm::getName( void ) const
{
	return ( _name );
}

int AForm::getGradeToSign() const
{
	return ( _signGrade );
}

int AForm::getGradeToExec() const
{
	return ( _execGrade );
}

bool AForm::getSigned() const
{
	return ( _signed );
}

std::ostream &operator<<( std::ostream &os, const AForm &instance )
{
	os << "Name(" << instance.getName() << ") | " 
	<< "Grades(" << instance.getGradeToSign() << ", " << instance.getGradeToExec() << ") | "
	<< "Signed(" << instance.getSigned() << ")" << std::endl;
	return ( os );
}