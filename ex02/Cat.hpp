#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
  private:
    Brain* _brain;

  public:
    Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);
    
    ~Cat();

    void  makeSound() const;
    Brain* ft_getBrain() const;

};

#endif
