/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:47:50 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 18:09:29 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Utils.hpp"

#include <iostream>

class Phonebook
{
public:
	Phonebook( void );
	~Phonebook( void );
	void	add( void );
	void	search( void );
private:
	int _ContactID;
	int	_ContactCPT;
	Contact	tab[8];
};

#endif