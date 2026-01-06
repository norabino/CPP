/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:42:44 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 16:53:30 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "exception"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool	_signed;
	const int _signGrade;
	const int _execGrade;

public:
	AForm( void );
	virtual ~AForm( void );
	AForm( std::string n, int sg, int eg );
	AForm( const AForm & ); 

	const AForm &operator=( const AForm & );

	void beSigned( Bureaucrat & );

	int CheckGrade( int g );

	virtual void execute( Bureaucrat const & executor ) const = 0;

	std::string getName( void ) const ;
	int getGradeToSign() const;
	int getGradeToExec() const;
	bool getSigned() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return (" grade is too high !");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return (" grade is too low !");
		}
	};

	class AFormAlreadySigned : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return (" is already signed !");
		}
	};

	class AFormNotSigned: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("AForm not signed !");
		}
	};

	class NameInexistant: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("This isn't a form name !");
		}
	};

};

std::ostream &operator<<( std::ostream &, AForm const &);