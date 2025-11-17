/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:06:38 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:03:15 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_Brain;
	Cat( std::string );

public:
	Cat( );
	Cat( Cat const & );
	~Cat( );

	Cat const &operator=( Cat const & );
	void	makeSound( ) const;
};

#endif