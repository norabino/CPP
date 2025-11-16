/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:23:07 by norabino          #+#    #+#             */
/*   Updated: 2025/11/16 14:26:43 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	WrongCat( std::string );

public:
	WrongCat( );
	WrongCat( WrongCat const & );
	~WrongCat( );

	WrongCat const &operator=( WrongCat const & );
	void	makeSound( ) const;
};
