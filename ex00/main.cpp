#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){

  // main de l'ecole 
  
  std::cout << "=== Constructor === " << std::endl;
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  //Animal *j;    // étoile collée au nom
  //Animal * j;   // étoile au milieu
  const Animal* i = new Cat();

  std::cout << std::endl;

  std::cout << "=== Type ===" << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  std::cout << std::endl;

  std::cout << "=== Sound ===" << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();

  std::cout << std::endl;

  std::cout << "=== Destrutor ===" << std::endl;
  delete meta; 
  delete i; // on détruit l'animal, le compilateur regard le vrai animal pointeur ~Dog() ensuite ~Animal()
  delete j;

  // Sa permet de traiter les animaux de maniere uniforme en gros on va mettre l'adresse de Dog dans Animal pour mieux le manipuler
  //Animal* zoo[3];
  //zoo[0] = new Dog();
  //zoo[1] = new Cat();
  //zoo[2] = new Animal();

  //for (int k = 0; k < 3; k++)
  //    zoo[k]->makeSound();   // chaque animal fait son bruit

 // Dog dog;            // un vrai Dog, sur la STACK contrairemetn a ce main qui utlise la HEAP avec new
 // dog.makeSound();    // Waf

  return (0);
  }
