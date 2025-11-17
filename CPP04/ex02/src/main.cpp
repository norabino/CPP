/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:26:49 by norabino          #+#    #+#             */
/*   Updated: 2025/11/17 17:20:05 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main( void )
{
	//const AAnimal* meta = new AAnimal();

	const AAnimal *tab[10];
	int	i = 0;

	while (i < 10)
	{
		if (!(i % 2))
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
		i++;
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	i = 0;
	while (i < 10)
	{
		delete(tab[i]);
		i++;
		std::cout << std::endl;
	}
	return (0);
}