/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:47:45 by norabino          #+#    #+#             */
/*   Updated: 2026/02/06 17:02:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>

class RPN
{
private:
	std::vector

public:
	RPN();
	RPN();
	RPN(const RPN &other);

	~RPN();

	RPN const &operator=(const RPN &other);

	class Exception : public std::runtime_error
	{
		public:
			explicit Exception(const std::string& msg);
	};
};
