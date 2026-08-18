#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->_type = "Cat";
	this->_brain = new Brain();

	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){ //pas besoin de copier les attribut car Animal(src) le fait deja 
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat &Cat::operator=(const Cat&rhs){
	std::cout << "Cat assignment operator called" << std::endl;

	if (this != &rhs){
		Animal::operator=(rhs);
		*this->_brain = *rhs._brain;
	}

	return (*this);
}

Cat::~Cat(){
	delete (this->_brain); // libéré le cerveau alloué
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}

//// objet
//Brain	&Cat::ft_getBrain() const{
//	return (*this->_brain); // *derefence on renvoie l'objet Brain
//}


// adresse
Brain	*Cat::ft_getBrain() const{
	return (this->_brain); // renvoie l'adresse _brain est deja un pointeur
}

