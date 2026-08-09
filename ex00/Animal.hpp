#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  protected:
    std::string type;

  public:
		Animal();
		Animal(std::string name);
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);

    ~Animal();

};

#endif
