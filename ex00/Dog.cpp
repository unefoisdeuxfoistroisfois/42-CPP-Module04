#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src){

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog&rhs){
	std::cout << "Dog assignment operator called" << std::endl;

	if (this != &rhs){
		this->_type = rhs._type;
	}

	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Waf" << std::endl;
}
