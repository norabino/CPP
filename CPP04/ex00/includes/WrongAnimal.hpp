/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:21:56 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 16:38:34 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class WrongAnimal
{
private:
	WrongAnimal( std::string );
protected:
	std::string type_;

public:
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & );
	virtual ~WrongAnimal( void );

	WrongAnimal const &operator=( WrongAnimal const & );
	void	makeSound( void ) const;
	std::string	getType( void ) const;
};
