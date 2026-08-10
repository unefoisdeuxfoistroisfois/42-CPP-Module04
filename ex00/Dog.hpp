#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {

  public:
    Dog();
    Dog(const Dog &src); //l'objet n'existe pas encore
    Dog &operator=(const Dog &rhs); //l'objet est deja existant

    ~Dog();

};

#endif
