/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:59:38 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 19:56:01 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Correct polymorphism ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong (non-virtual) polymorphism ===" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound(); // will print WrongAnimal's sound, not WrongCat's !
    delete wrongCat;

    std::cout << "\n=== Extra tests ===" << std::endl;
    Dog dogA;
    Dog dogB(dogA); // copy constructor
    Cat catA;
    Cat catB;
    catB = catA; // copy assignment

    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    for (int k = 0; k < 4; k++)
        animals[k]->makeSound();
    for (int k = 0; k < 4; k++)
        delete animals[k];

    return 0;
}
