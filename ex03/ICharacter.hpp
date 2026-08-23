#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

//#include "AMateria.hpp"
#include <string.h>

class AMateria;

class ICharacter
{
	public:
		// destructor
		virtual ~ICharacter() {}
		
		// get set
		virtual const std::string &getName() const = 0;

		// fonctions 
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

#endif