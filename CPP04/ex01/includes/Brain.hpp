/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:08:38 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:16:33 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	Brain( std::string[100] );
public:
	std::string ideas[100];
	Brain( void );
	Brain( Brain const & );
	~Brain( void );
	
	Brain const &operator=( Brain const & );
};

#endif