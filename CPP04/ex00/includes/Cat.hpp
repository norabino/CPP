/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:06:38 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:08:03 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

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

#endif