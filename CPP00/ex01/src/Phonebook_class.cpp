/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 17:52:47 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 17:07:06 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook_class.hpp"
#include "../includes/utils.hpp"

Phonebook::Phonebook( void )
{
	this->_ContactID = 0;
	this->_ContactCPT = 0;
	return ;
}

Phonebook::~Phonebook( void )
{
	return ;
}

void Phonebook:: add( void )
{
	if (this->_ContactID >= 8)
		this->_ContactID = 0;
	this->tab[_ContactID].set_infos();
	this->tab[_ContactID].set_ID(this->_ContactID);
	this->_ContactID++;
	if (this->_ContactCPT < 8)
		this->_ContactCPT++;
	std::cout << "Contact added !" << std::endl;
}

void	Phonebook::search( void )
{
	int	i = 0;

	print_firstline();
	while (i < this->_ContactCPT)
	{
		std::string first_name = is_to_long(this->tab[i].get_FirstName());
		std::string last_name = is_to_long(this->tab[i].get_LastName());
		std::string nickname = is_to_long(this->tab[i].get_Nickname());
		std::cout << "|" << std::setw(10) << i 
				<< "|" << std::setw(10) << first_name
				<< "|" << std::setw(10) << last_name
				<< "|" << std::setw(10) << nickname << "|" << std::endl;
				i++;
	}
	std::cout << std::string(45, '-') << std::endl << std::endl;
}
