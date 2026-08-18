#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
  private:
    Brain* _brain; // pointeur vers Brain car l'ecole veut qeu on manipule les allcoation dynamique

  public:
    Dog();
    Dog(const Dog &src); //l'objet n'existe pas encore
    Dog &operator=(const Dog &rhs); //l'objet est deja existant

    ~Dog();

    void  makeSound() const;
    Brain* ft_getBrain() const;

};

#endif
