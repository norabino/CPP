/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:06:38 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:23:00 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Cat( std::string );

public:
	Cat( );
	Cat( Cat const & );
	~Cat( );

	Cat const &operator=( Cat const & );
	void	makeSound( ) const;
};
