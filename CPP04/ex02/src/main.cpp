/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:26:49 by norabino          #+#    #+#             */
/*   Updated: 2025/10/14 17:53:00 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void)
{
    std::cout << "\n\n----- CAT TEST -----\n" << std::endl;
    Cat* CAT_test = new Cat();

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << CAT_test->getType() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    CAT_test->makeSound();
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete CAT_test;
    std::cout << RESET << "\n\n\n" << std::endl;



    std::cout << "----- DOG TEST -----\n" << std::endl;
    Dog* DOG_test = new Dog();

    std::cout << "\n" << MAGENTA << "Call of get_type   : " << RESET << DOG_test->getType() << std::endl;
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    DOG_test->makeSound();
    std::cout << "\n" << RED << "Destructor : " << YELLOW << std::endl;
    delete DOG_test;
    std::cout << RESET << "\n\n\n" << std::endl;

    return 0;
}
