#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

// makeSound() has no body here: it is pure virtual (= 0 in the header),
// so Animal can no longer be instantiated. Every concrete subclass
// (Dog, Cat) MUST provide its own implementation.
