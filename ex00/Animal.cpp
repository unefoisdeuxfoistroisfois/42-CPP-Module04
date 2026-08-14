#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;

	this->_type = "Default";
}

Animal::Animal(const Animal &src){
	std::cout << "Animal copy constructor called" << std::endl;

	this->_type = src._type;
	
}

Animal &Animal::operator=(const Animal &rhs){
	std::cout << "Animal assignment operator called" << std::endl;

	if (this != &rhs){
			this->_type = rhs._type;
	}

	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal desctructor calld" << std::endl;
}

void	Animal::makeSound() const{
	std::cout << "This animal doesn't make sound" << std::endl;
}

std::string	Animal::getType() const{ // en français -> (const) a l'interieur de getType je ne toucherais a rien
	return (this->_type);
}
