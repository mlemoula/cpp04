#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& src);
    ~WrongAnimal(); // NOT virtual, on purpose

    std::string getType() const;
    void makeSound() const; // NOT virtual, on purpose
};

#endif
