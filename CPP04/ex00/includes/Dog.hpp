/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:43 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:07:52 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

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

#endif