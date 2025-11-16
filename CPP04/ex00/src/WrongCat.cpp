/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:27:25 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:29:26 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( std::string t )
{
	std::cout << " ⚒️  WrongCat Parametric Constructor called." << std::endl;
	( void )t;
}


WrongCat::WrongCat( void )
{
	std::cout << " ⚒️  WrongCat Default Constructor called." << std::endl;
	this->type_ = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal( other )
{
	std::cout << " ⚒️  WrongCat Copy Constructor called." << std::endl;
	*this = other;
}

WrongCat const	&WrongCat::operator=( WrongCat const &other )
{
	if ( this != &other )
		this->type_ = other.type_;
	return ( *this );
}

WrongCat::~WrongCat( void )
{
	std::cout << " 🚧 WrongCat Destructor called." << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "kuix..." << std::endl;
}