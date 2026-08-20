#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria constructor called" << std::endl;
	this->_type = "Default";
}

// Ecole
AMateria::AMateria(std::string const &type){
	std::cout << "AMateria constructor called" << std::endl;

	this->_type = _type;
}

AMateria::AMateria(const AMateria &src){
	std::cout << "AMateria copy constructor called" << std::endl;

	this->_type = src._type;
	//*this = src;
}

AMateria &AMateria::operator=(const AMateria &rhs){
	std::cout << "AMateria assignment operator called" << std::endl;

	//if (this != &rhs){
		//this->_type = rhs._type;
		////*this = rhs;
	//}
	(void)rhs;

	return (*this);
}

// Ecole
const std::string &AMateria::getType() const{
	return (this->_type);
}

// Ecole
void AMateria::use(ICharacter &target){
	(void)target;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}
