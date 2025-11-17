/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:43 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:03:18 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_Brain;
	Dog( std::string );

public:
	Dog( );
	Dog( Dog const & );
	~Dog( );

	Dog const &operator=( Dog const & );
	void	makeSound( ) const;

};

#endif