/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:14:25 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:52:25 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type_ = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;

}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal( other )
{
	*this = other;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat const	&WrongCat::operator=( WrongCat const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "CUICUI" << std::endl;
}