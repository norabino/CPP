/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:47:50 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 16:55:35 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "../includes/Contact_class.hpp"
#include "../includes/utils.hpp"

#include <iostream>
#include <iomanip>

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