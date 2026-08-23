#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){ // Je suis pas sur
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src){
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs){
	std::cout << "Ice assignment operator called" << std::endl;
	if (this != &rhs){
		AMateria::operator=(rhs);
	}

	return (*this);
}

Ice::~Ice(){
	std::cout << "Ice destructor called" << std::endl;

}

AMateria *Ice::clone() const{
	/* 1) constructeur de copie
	return (new Ice(*this));
	*/

	/* 2) Operator= 
	Ice* res = new Ice();
	*res = *this;
	return (res)
	*/

	/* 3) constructeur de base */
	Ice *res = new Ice();
	return (res); //conversion de Ice* en AMaterie* car elle herite
}

void	Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at "
						<< target.getName() 
						<< " *"<<std::endl;
}