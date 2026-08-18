#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
  int index = 0;
  int sizeAnimals = 10;
  const Animal* arrayAnimals[10];

  std::cout << "=== Arrays ===" << std::endl;
  while (index < sizeAnimals){
    if (index < sizeAnimals / 2){
      arrayAnimals[index] = new Dog();
    } else{
      arrayAnimals[index] = new Cat();
    }

    index ++;
  }

  std::cout << std::endl;
  std::cout << "=== Make sound ===" << std::endl;

  for (int k = 0; k < 10; k++){
    arrayAnimals[k]->makeSound();
  }

  std::cout << std::endl;
  std::cout << "=== Delete ===" << std::endl;

  for (int index = 0; index < sizeAnimals; index ++){
    delete (arrayAnimals[index]);
  }

  std::cout << std::endl;
  std::cout << "=== Deep copy ===" << std::endl;

  Dog a;
  Dog b = a;
  std::cout << "Brain a : " << a.ft_getBrain() << std::endl;
  std::cout << "Brain b : " << b.ft_getBrain() << std::endl;

  std::cout << std::endl;

  //main de l'ecole
//  const Animal* j = new Dog();
//  const Animal* i = new Cat();
//
//  delete j;//should not create a leak
//  delete i;

// Teste pour la classe abstraite
/*
  //v1
  Animal animal;

  //v2
  Animal *animal = new Animal();
  delete (animal);
*/
  return 0;
}
