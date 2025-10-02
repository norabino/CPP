/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:16:05 by norabino          #+#    #+#             */
/*   Updated: 2025/10/01 16:24:01 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include "Phonebook_class.hpp"

std::string	is_to_long( std::string input );
int			only_whitespace( std::string str );
std::string	clear_string( std::string str );
void		print_firstline( void );

#endif