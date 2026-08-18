#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  protected:
    std::string _type;

  public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);

    virtual ~Animal();

    virtual void  makeSound() const = 0; // rends la fonction virtuelle pure, si il y'a au moin une fvp alors la classe devient abstraite masi je dois redefinir chez les enfant
    std::string getType() const;

};

#endif
