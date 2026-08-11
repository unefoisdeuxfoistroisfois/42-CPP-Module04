#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
  private:
    std::string type;

  public:
    Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);
    
    ~Cat();

    void makeSound();

};

#endif
