/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:57:50 by norabino          #+#    #+#             */
/*   Updated: 2026/01/13 15:17:49 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

#include "Data.hpp"

class Serializer
{
private:
	Serializer();
	Serializer( std::string );
	Serializer(const Serializer &other);

	~Serializer();

	Serializer const &operator=(const Serializer &other);

public:
	static uintptr_t serialize( Data *ptr );
	static	Data *deserialize( uintptr_t raw );
};
