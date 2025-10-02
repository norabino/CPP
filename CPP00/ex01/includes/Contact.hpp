/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:12:23 by norabino          #+#    #+#             */
/*   Updated: 2025/10/02 18:08:34 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Utils.hpp"
#include <iostream>

class Contact
{
public:
	Contact( void );
	~Contact( void );
	void	set_infos( void );
	void	clear_infos( void );
	void	set_ID( int );
	std::string	get_FirstName(void) const;
	std::string	get_LastName(void) const;
	std::string	get_Nickname(void) const;	
private:
	std::string _FirstName;
	std::string	_LastName;
	std::string	_Nickname;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;
	int	id;
};

#endif