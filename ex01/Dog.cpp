/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:18:58 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 20:18:59 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src), brain(new Brain(*src.brain))
{
    std::cout << "Dog copy constructor called (deep copy of Brain)" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        *(this->brain) = *(src.brain); // deep copy, no new here
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}
