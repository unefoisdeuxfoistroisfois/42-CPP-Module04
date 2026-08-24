#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource construcor called" << std::endl;

  for (int i = 0; i < 4; i++){
    this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src){
	std::cout << "MateriaSource copy construcor called" << std::endl;

  for (int i = 0; i < 4; i++){
		if (src._materias[i] != NULL){
			this->_materias[i] = src._materias[i]->clone();
		}else{
			this->_materias[i] = NULL;
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs){
	std::cout << "MateriaSource assignment operator called" << std::endl;

	if (this != &rhs){
		for (int i = 0; i < 4; i ++){
			delete (this->_materias[i]);
			this->_materias[i] = NULL;
		}

		for(int i = 0; i < 4; i++){
			if (rhs._materias[i] != NULL){
				this->_materias[i] = rhs._materias[i]->clone();
			}
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia){
	if (materia == NULL){
		return;
	}

    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = materia;

            return ;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type){
			AMateria* res = this->_materias[i]->clone();

			return (res);
		}
	}
	return (NULL);
}

MateriaSource::~MateriaSource(){
  std::cout << "MateriaSource destructor called" << std::endl;


	for(int i = 0; i < 4; i ++){
		delete (_materias[i]);
	}
}