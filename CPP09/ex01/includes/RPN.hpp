/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:47:45 by norabino          #+#    #+#             */
/*   Updated: 2026/03/10 13:55:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <string>
# include <sstream>
# include <exception>

class RPN
{
	private:
		std::stack<double> _stack;
		double	_plus( double a, double b );
		double	_minus( double a, double b );
		double	_multiply( double a, double b );
		double	_divide( double a, double b );
		void	_process( double (RPN::*f)(double, double) );

	public:
		~RPN();
		RPN();
		RPN( const std::string &av );
		RPN( const RPN &copy );
		RPN &operator=( const RPN &instance );

		double	getResult();
		void	execute( const std::string &inputStr );

	class emptyStackException : public std::runtime_error
	{
		public:
			explicit emptyStackException(const std::string& msg);
	};

	class invalidArgException : public std::runtime_error
	{
		public:
			explicit invalidArgException(const std::string& msg);
	};

	class divisionByZero : public std::runtime_error
	{
		public:
			explicit divisionByZero(const std::string& msg);
	};
};
