#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){ // Je suis pas sur
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Ice &rhs){
	std::cout << "Cure assignment operator called" << std::endl;
	if (this != &rhs){
		AMateria::operator=(rhs);
	}

	return (*this);
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;

}

AMateria *Cure::clone() const{
	std::cout << "" << std::endl;
	/* 1) constructeur de copie
	return (new Cure(*this));
	*/

	/* 2) Operator= 
	Cure* res = new Ice();
	*res = *this;
	return (res)
	*/

	/* 3) constructeur de base */
	Cure *res = new Cure();
	return (res); //conversion de Cure* en AMaterie* car elle herite
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals"
						<< target.getName() 
						<< "’s wounds *"<<std::endl;
}