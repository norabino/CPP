/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:13:37 by norabino          #+#    #+#             */
/*   Updated: 2025/10/16 17:09:06 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

bool	checkFile( std::string filename )
{
	struct	stat info;

	if ( stat(filename.c_str(), &info) )
		return ( std::cout << "File inexistant.." << std::endl, false );
	if ( info.st_mode & S_IFDIR )
		return ( std::cout << "The 'file' is a directory.." << std::endl, false );
	return ( true );
}

int	replace(std::string filename, std::string s1, std::string s2)
{
	if ( !checkFile( filename ))
		return (0);

	std::ifstream fileIn;
	fileIn.open( filename.c_str() );
	
	std::string file_str;
	char c;
	while ( fileIn.get(c) )
		file_str += c;
	fileIn.close();

	size_t ret = file_str.find( s1, 0 );
	while ( ret != std::string::npos )
	{
		file_str.erase( ret, s1.length() );
		file_str.insert( ret, s2 );
		ret = file_str.find( s1, ret );
	}

	std::ofstream fileOut;
	fileOut.open( (filename + ".replace").c_str() );
	if ( !fileOut.good() )
		return ( std::cout << "Output file cannot be created.." << std::endl, 0);

	fileOut << file_str;
	fileOut.close();

	return (1);
}