/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:58:27 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:34:04 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
	std::string	getType( void ) const;
};

#endif