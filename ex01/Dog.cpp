#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	this->_brain = new Brain();

	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src){

	std::cout << "Dog copy constructor called" << std::endl;

	this->_brain = new Brain(*src._brain); // dereferencement pour avoir la source a copier
}

Dog &Dog::operator=(const Dog &rhs){
	std::cout << "Dog assignment operator called" << std::endl;

	// Version 1
	if (this != &rhs){
		Animal::operator=(rhs); // copier les attribut de base donc on herite
		*this->_brain = *rhs._brain; // Copie les attribut de brain sans new et delete
	}

	// Version 2
	//if (this != &rhs){
	//	Animal::operator=(rhs); // copier les attribut de base donc on herite
	//	delete this->_brain; // delete le cerveau crée par le constructeur
	//	this->_brain = new Brain(*rhs._brain);
	//}

	return (*this);
}

Dog::~Dog(){
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << "Waf" << std::endl;
}

// adresse
Brain	*Dog::ft_getBrain() const{
	return (this->_brain); // renvoie l'adresse _brain est deja un pointeur
}


