#include "Character.hpp"

Character::Character(){
	std::cout << "Charactere construcor called" << std::endl;

	this->_name = "Default";

	int	i = 0;
	while (i < 4){
		this->_inventory[i] = NULL; // ou = 0
		i ++;
	}
}

Character::Character(const std::string &name){
	std::cout << "Charactere parameterized construcor called" << std::endl;
	this->_name = name;

	int	i = 0;
	while (i < 4){
		this->_inventory[i] = NULL; // ou = 0
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
			this->_inventory[i] = 0; // NULL;
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

const std::string &Character::getName() const{
	return (this->_name);
}

void Character::equip(AMateria *m){
	if (m == NULL){

		return ;
	}

	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;

			return ; // Dés que c'est ranger on quitte
		}
	}
	std::cout << "Invertory is full" << std::endl;
}

// Cette fonctione ne doit pas detruite masi juste rendre NULL et ensuite detruit dans le main
void Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::cout << "Invalide index" <<std::endl;
		
		return ;
	}

	if (this->_inventory[idx] == NULL){
		std::cout << "Inventory slot is empty" <<std::endl;

		return ;
	}

	this->_inventory[idx] = NULL; //permet de garde l'adress
}

void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 3){
		std::cout << "Invalide index" <<std::endl;

		return;
	}

	if (this->_inventory[idx] == NULL){
		std::cout << "Inventory slot is empty" <<std::endl;

		return;
	}
	
	this->_inventory[idx]->use(target);
}


Character::~Character(){
	std::cout << "Character destructor called" << std::endl;

	for(int i = 0; i < 4; i ++){
		delete (_inventory[i]);
	}
}