/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:51:52 by norabino          #+#    #+#             */
/*   Updated: 2025/10/07 14:17:11 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
public:
	Harl( void );
	~Harl( void );
	void	complain( std::string );
private:
	void	_debug( void ) const;
	void	_info( void ) const;
	void	_warning( void ) const;
	void	_error( void ) const;
};

#endif