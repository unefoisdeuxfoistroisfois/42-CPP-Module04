#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){ // Je suis pas sur
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs){
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
	/* 1) constructeur de copie */
	return (new Cure(*this));

	/* 2) Operator= 
	Cure* res = new Cure();
	*res = *this;
	return (res)
	*/

	/* 3) constructeur de base
	Cure *res = new Cure();
	return (res); //conversion de Cure* en AMaterie* car elle herite
	*/
}

void	Cure::use(ICharacter &target){
	std::cout << "* heals "
						<< target.getName() //. car target est une reference
						<< "'s wounds *"<<std::endl;
}