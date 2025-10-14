/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:16:48 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:18:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
protected:
	std::string type_;

public:
	WrongAnimal( void );
	WrongAnimal( std::string );
	WrongAnimal( WrongAnimal const & );
	virtual ~WrongAnimal( void );

	WrongAnimal const &operator=( WrongAnimal const & );
	virtual void	makeSound( void ) const;
	std::string	getType( void ) const;
};

#endif