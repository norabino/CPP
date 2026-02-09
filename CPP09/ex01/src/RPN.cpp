/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:47:56 by norabino          #+#    #+#             */
/*   Updated: 2026/02/06 17:03:13 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::Exception::Exception( const std::string& msg ) : std::runtime_error( msg )
{}

RPN::RPN( void )
{
	std::cout << "RPN default constructor called." << std::endl;

}

RPN::RPN(  )
{
	std::cout << "RPN parametric constructor called." << std::endl;
	
}

RPN::RPN( RPN const & other )
{
	std::cout << "RPN copy constructor called." << std::endl;
	*this = other;
}

RPN const	&RPN::operator=( RPN const &other )
{
	
	return ( *this );
}

RPN::~RPN( void )
{
	std::cout << "RPN destructor called." << std::endl;
}

