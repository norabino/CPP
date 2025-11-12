/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:21:31 by norabino          #+#    #+#             */
/*   Updated: 2025/11/07 17:38:18 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"

Form::Form( void ) : _signGrade( 150 ), _execGrade( 150 )
{
}

Form::~Form( void )
{
}

Form::Form( std::string n, int sg, int eg ) : _name( n ), _signed( false ), _signGrade( sg ), _execGrade( eg )
{
	if (CheckGrade( sg ) == -1 || CheckGrade( eg ) == -1)
		throw Form::GradeTooHighException();
	if (CheckGrade( sg ) == 1 || CheckGrade( eg ) == 1)
		throw Form::GradeTooLowException();
}

Form::Form( Form const &other ) : _name( other._name ),  _signed( other._signed ), _signGrade( other._signGrade ), _execGrade( other._execGrade )
{
}

const Form &Form::operator=( const Form &other )
{
	_signed = other._signed;
	return ( *this );
}

void Form::beSigned( Bureaucrat &instance )
{
	if ( _signed == true )
		throw Form::FormAlreadySigned();
	if ( instance.getGrade() > this->_signGrade )
		throw Form::GradeTooLowException();
	_signed = true;
}

int Form::CheckGrade( int g)
{
	if ( g < 1 )
		return ( -1 );
	if ( g > 150 )
		return ( 1 );
	return ( 0 );
}

std::string Form::getName( void ) const
{
	return ( _name );
}

int Form::getGradeToSign() const
{
	return ( _signGrade );
}

int Form::getGradeToExec() const
{
	return ( _execGrade );
}

bool Form::getSigned() const
{
	return ( _signed );
}

std::ostream &operator<<( std::ostream &os, const Form &instance )
{
	os << "Form " << instance.getName() << " Grade: " << instance.getGradeToSign() << " & " << instance.getGradeToExec() << " status signed: " << instance.getSigned() << std::endl;
	return ( os );
}