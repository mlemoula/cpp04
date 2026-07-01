/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:19:05 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 20:47:37 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Deep copy test ===" << std::endl;
    Dog original;
    Dog copy(original);

    std::cout << "\n=== Array of Animal, half Dog half Cat ===" << std::endl;
    Animal* animals[6];
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (int i = 3; i < 6; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 6; i++)
        animals[i]->makeSound();

    for (int i = 0; i < 6; i++)
        delete animals[i];

    std::cout << "\n=== No leak test ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    delete j;
    delete k;

    return 0;
}
