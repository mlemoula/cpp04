#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat& operator=(const WrongCat& src);
    ~WrongCat();

    void makeSound() const; // hides parent's, does NOT override it
};

#endif
