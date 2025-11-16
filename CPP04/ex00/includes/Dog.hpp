/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:43 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:23:22 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Dog( std::string );

public:
	Dog( );
	Dog( Dog const & );
	~Dog( );

	Dog const &operator=( Dog const & );
	void	makeSound( ) const;

};
