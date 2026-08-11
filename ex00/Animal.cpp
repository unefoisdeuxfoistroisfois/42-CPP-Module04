#include "Animal.hpp"

Animal::Animal(){

}

Animal::~Animal(){
	std::cout << "Animal desctructor calld" << std::endl;
}

void	Cat::makeSound(){
	std::cout << "This animal doesn't make sound" << std::endl;
}
