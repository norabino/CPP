/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:14:25 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:27:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type_ = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal( other )
{
	*this = other;
}

WrongCat const	&WrongCat::operator=( WrongCat const &other )
{
	this->type_ = other.type_;
	return ( *this );
}

WrongCat::~WrongCat( void )
{
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "CUICUI" << std::endl;
}