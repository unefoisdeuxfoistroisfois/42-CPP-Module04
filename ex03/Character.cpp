#include "Character.hpp"

Character::Character(){
	std::cout << "Charactere construcor called" << std::endl;

	this->_name = "Default";

	int	i = 0;
	while (i < 4){
		_inventory[i] = NULL; // ou = 0
		i ++;
	}
}

Character::Character(const std::string &name){
	std::cout << "Charactere parameterized construcor called" << std::endl;
	this->_name = name;

	int	i = 0;
	while (i < 4){
		_inventory[i] = NULL; // ou = 0
		i ++;
	}
}

Character::Character(const Character &src){
	std::cout << "Charactere copy construcor called" << std::endl;
	this->_name = src._name;

	for (int i = 0; i < 4; i++){
		if (src._inventory[i] != NULL){
			this->_inventory[i] = src._inventory[i]->clone();
		}else {
			_inventory[i] = 0; // NULL;
		}
	}
}

Character &Character::operator=(const Character &rhs){
	std::cout << "Character assignment operator called" << std::endl;

	if (this != &rhs){
		// Suppression de l’ancien inventaire
		for (int i = 0; i < 4; i ++){
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}

		this->_name = rhs._name;

		//Nouvelle inventaire
		for(int i = 0; i < 4; i++){
			if (rhs._inventory[i] != NULL){
				this->_inventory[i] = rhs._inventory[i]->clone();
			}
		}
	}
	return (*this);
}


Character::~Character(){
	std::cout << "Character destructor called" << std::endl;

	for(int i = 0; i < 4; i ++){
		delete (_inventory[i]);
	}
}