#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src){

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat&rhs){
	std::cout << "WrongCat assignment operator called" << std::endl;

	if (this != &rhs){
		this->_type = rhs._type;
	}

	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}
