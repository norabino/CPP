/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:27:28 by norabino          #+#    #+#             */
/*   Updated: 2026/01/13 16:14:58 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

#include <cstdlib>
#include <ctime>

Base::~Base( void )
{
	//std::cout << "Base destructor called." << std::endl;
}

Base	*generate( void )
{

	static bool seeded = false;
	if ( !seeded ) {
		srand(static_cast<unsigned int>(time(NULL)));
		seeded = true;
	}

	int nb = rand() % 3;
	if (nb == 0)
		return new(A);
	if (nb == 1)
		return new(B);
	if (nb == 2)
		return new(C);
	return (NULL);
}


void identify( Base *p )
{
	if ( dynamic_cast<A *>(p) )
		std::cout << "A" << std::endl;
	else if ( dynamic_cast<B *>(p) )
		std::cout << "B" << std::endl;
	else if ( dynamic_cast<C *>(p) )
		std::cout << "C" << std::endl;
}

void identify( Base &p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	}
	catch(...){}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return;
	}
	catch(...){}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return;
	}
	catch(...)
	{
		std::cout << "unknown" << std::endl;
	}
}