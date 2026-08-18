#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src){
	std::cout << "Brain copy constructor called" << std::endl;

	//*this = src;

	for (int i = 0; i < 100; i++){
		this->_ideas[i] = src._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &rhs){
	std::cout << "Brain assignement operator called" << std::endl;

	//if (this != &rhs){
	//	*this = src; // sa marche pas car c'est un tableau en c et en c++ on peu pas assigner un tableau d'entier
	//}
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = rhs._ideas[i];
	}

	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;

}