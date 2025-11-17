/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:58:27 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:00:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class Animal
{
private:
	Animal( std::string );
protected:
	std::string type_;

public:
	Animal( void );
	Animal( Animal const & );
	virtual ~Animal( void );

	Animal const &operator=( Animal const & );
	virtual void	makeSound( void ) const;
	virtual std::string	getType( void ) const;
};
