/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:18:52 by norabino          #+#    #+#             */
/*   Updated: 2026/01/06 18:15:19 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int	_grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string, int );

	Bureaucrat( Bureaucrat const & );
	Bureaucrat const &operator=( Bureaucrat const & );

	~Bureaucrat( void );

	std::string const getName( void ) const;
	int	getGrade( void ) const;

	void IncrementGrade( void );
	void DecrementGrade( void );

	int CheckGrade( int g);

	void signForm( Form & );
	
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
	
};

std::ostream &operator<<( std::ostream &, Bureaucrat const &);