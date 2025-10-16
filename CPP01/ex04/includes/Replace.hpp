/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:13:55 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 16:38:29 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <sys/stat.h>

int	checkInput( std::string, std::string );
int	replace(std::string filename, std::string s1, std::string s2);

#endif