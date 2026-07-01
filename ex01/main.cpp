#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Deep copy test ===" << std::endl;
    Dog original;
    Dog copy(original); // check with a debugger/print that brain addresses differ

    std::cout << "\n=== Array of Animal, half Dog half Cat ===" << std::endl;
    Animal* animals[6];
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (int i = 3; i < 6; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 6; i++)
        animals[i]->makeSound();

    for (int i = 0; i < 6; i++)
        delete animals[i]; // deleted via Animal* -> virtual destructor is mandatory

    std::cout << "\n=== No leak test ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* k = new Cat();
    delete j;
    delete k;

    return 0;
}
