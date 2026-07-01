/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemoula <mlemoula@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:19:34 by mlemoula          #+#    #+#             */
/*   Updated: 2026/07/01 20:19:35 by mlemoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src), brain(new Brain(*src.brain))
{
    std::cout << "Cat copy constructor called (deep copy of Brain)" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        *(this->brain) = *(src.brain); // deep copy, no new here
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
