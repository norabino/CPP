/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:59:14 by norabino          #+#    #+#             */
/*   Updated: 2026/01/13 13:53:27 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <cerrno>
#include <climits>
#include <cctype>	

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter( std::string );
	ScalarConverter(const ScalarConverter &other);

	~ScalarConverter();

	ScalarConverter const &operator=(const ScalarConverter &other);

public:
	static void convert( std::string );
};
