/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:23:09 by norabino          #+#    #+#             */
/*   Updated: 2025/11/07 17:29:55 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"
#include "exception"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool	_signed;
	const int _signGrade;
	const int _execGrade;

public:
	Form( void );
	~Form( void );
	Form( std::string n, int sg, int eg );
	Form( const Form & ); 

	const Form &operator=( const Form & );

	void beSigned( Bureaucrat & );

	int CheckGrade( int g );

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

	class FormAlreadySigned : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return (" is already signed !");
		}
	};

};

std::ostream &operator<<( std::ostream &, Form const &);