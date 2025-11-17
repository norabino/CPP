/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:47:51 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:16:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "iostream"

class AAnimal
{
private:
	AAnimal( std::string );
protected:
	std::string type_;

public:
	AAnimal( void );
	AAnimal( AAnimal const & );
	virtual ~AAnimal( void );

	AAnimal const &operator=( AAnimal const & );
	virtual void	makeSound( void ) const = 0;
	std::string	getType( void ) const;
};

#endif