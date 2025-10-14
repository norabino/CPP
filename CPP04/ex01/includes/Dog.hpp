/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:43 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:18:35 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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