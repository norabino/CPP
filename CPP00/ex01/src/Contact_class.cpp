/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:20:32 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 16:53:57 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact_class.hpp"
#include "../includes/utils.hpp"

Contact::Contact( void )
{
	this->id = -1;
	return ;
}

Contact::~Contact( void )
{
	return ;
};

void	Contact::set_infos( void )
{
	std::cout << "Please complete the following informations :" << std::endl;

	std::cout << "First name ?" << std::endl;
	do {
		std::getline(std::cin, this->_FirstName);
		this->_FirstName = clear_string(this->_FirstName);
	} while (this->_FirstName.empty());

	std::cout << "Last name ?" << std::endl;
	do {
		std::getline(std::cin, this->_LastName);
		this->_LastName = clear_string(this->_LastName);
	} while (this->_LastName.empty());

	std::cout << "Nickname ?" << std::endl;
	do {
		std::getline(std::cin, this->_Nickname);
		this->_Nickname = clear_string(this->_Nickname);
	} while (this->_Nickname.empty());

	std::cout << "Phone number ?" << std::endl;
	do {
		std::getline(std::cin, this->_PhoneNumber);
		this->_PhoneNumber = clear_string(this->_PhoneNumber);
	} while (this->_PhoneNumber.empty());

	std::cout << "Darkest secret ?" << std::endl;
	do {
		std::getline(std::cin, this->_DarkestSecret);
		this->_DarkestSecret = clear_string(this->_DarkestSecret);
	} while (this->_DarkestSecret.empty());
}

void	Contact::set_ID( int value )
{
	this->id = value;	
}

std::string	Contact::get_FirstName( void ) const
{
	return ( this->_FirstName );
}

std::string	Contact::get_LastName( void ) const
{
	return ( this->_LastName );
}

std::string	Contact::get_Nickname( void ) const
{
	return ( this->_Nickname );
}

