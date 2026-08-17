#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;

	this->_type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	this->_type = src._type;
	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
	std::cout << "WrongAnimal assignment operator called" << std::endl;

	if (this != &rhs){
			this->_type = rhs._type;
	}

	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const{
	std::cout << "This animal doesn't make sound" << std::endl;
}

std::string	WrongAnimal::getType() const{ // en français -> (const) a l'interieur de getType je ne toucherais a rien
	return (this->_type);
}
