#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(){

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat&rhs){
	std::cout << "Cat assignment operator called" << std::endl;

	if (this != &rhs){
		this->type = rhs.type;
	}

	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(){
	std::cout << "Miaou" << std::endl;
}
