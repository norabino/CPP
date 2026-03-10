/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:47:56 by norabino          #+#    #+#             */
/*   Updated: 2026/03/10 13:55:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::emptyStackException::emptyStackException( const std::string& msg ) : std::runtime_error( msg )
{}

RPN::invalidArgException::invalidArgException( const std::string& msg ) : std::runtime_error( msg )
{}

RPN::divisionByZero::divisionByZero( const std::string& msg ) : std::runtime_error( msg )
{}

RPN::~RPN( void )
{}

RPN::RPN( void )
{}

RPN::RPN( const std::string &inputStr )
{
	this->execute( inputStr );
}

RPN::RPN( RPN const &copy )
{
	*this = copy;
}

RPN	&RPN::operator=( RPN const &instance )
{
	if ( this != &instance )
		_stack = instance._stack;
	return ( *this );
}

void	RPN::_process( double (RPN::*f)(double, double) )
{
	double	a;
	double	b;
	
	if (_stack.size() < 2)
		throw RPN::emptyStackException("Error: Empty Stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push((this->*f)(b, a));
}

double	RPN::_plus( double a, double b )
{
	return ( a + b );
}

double	RPN::_minus( double a, double b )
{
	return ( a - b );
}

double	RPN::_multiply( double a, double b )
{
	return ( a * b );
}

double	RPN::_divide( double a, double b )
{
	if ( b == 0 )
		throw RPN::divisionByZero("Error: Division by zero");
	return ( a / b );
}

double	RPN::getResult()
{
	if ( _stack.empty() )
		throw RPN::emptyStackException("Error: Empty Stack");
	else if ( _stack.size() > 1 )
		throw RPN::invalidArgException("Error: Invalid argument");
	return ( _stack.top() );
}

void	RPN::execute( const std::string &inputStr )
{
	std::stringstream	ss( inputStr );
	std::string			token;
	int					num;

	while ( std::getline( ss, token, ' ' ) )
	{
		if ( token.empty() )
			continue;
		if ( ((token.length() == 1 && isdigit(token[0])) ||
				(token.length() == 2 && token[0] == '-' && isdigit(token[1]))) )
		{
			std::stringstream(token) >> num;
			_stack.push(num);
		}
		else if ( token == "+" )
			_process(&RPN::_plus);
		else if ( token == "-" )
			_process(&RPN::_minus);
		else if ( token == "*" )
			_process(&RPN::_multiply);
		else if ( token == "/" )
			_process(&RPN::_divide);
		else
			throw RPN::invalidArgException("Error");
	}
	std::cout << this->getResult() << std::endl;
}