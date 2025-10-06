/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:13:37 by norabino          #+#    #+#             */
/*   Updated: 2025/10/06 20:08:36 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

int	try_to_open(std::ifstream &inputed_file, std::ofstream &output_file)
{
	if (!inputed_file.is_open())
	{
		std::cout << "Could not open inputed file" << std::endl;
		return (false);
	}
	if (!output_file.is_open())
	{
		std::cout << "could not open output file." << std::endl;
		inputed_file.close();
		return (false);
	}
	return (true);
}

int	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream inputfile(filename.c_str());
	std::ofstream	outputfile((filename + ".replace").c_str());

	if (!try_to_open(inputfile, outputfile))
		return (0);
	
	std::string	line;
	int	flg = 0;
	while (getline(inputfile, line))
	{
		size_t	i = 0;
		size_t ret = line.find(s1, i);
		while (ret != std::string::npos)
		{
			line.erase(ret, s1.length());
			line.insert(ret, s2);
			i = ret + s2.length();
			ret = line.find(s1, i);
			flg = 1;
		}
		outputfile << line << std::endl;
	}
	inputfile.close();
	outputfile.close();
	if (!flg)
	{
		std::cout << "No target found." << std::endl;
		return (0);
	}
	return (1);
}