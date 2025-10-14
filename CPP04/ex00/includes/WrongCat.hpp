/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:15:04 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 16:16:33 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

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

#endif