/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 18:59:30 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 18:59:31 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &src)
        Animal::operator=(src);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}
