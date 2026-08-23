#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria*	_inventory[4];

	public:
		Character();
		Character(const Character &src);
		Character(const std::string &name);
		Character &operator=(const Character &rhs);
		~Character();

		// ICharactere
		// get set
		const std::string &getName() const;

		// fonctions 
		void equip(AMateria *m); //equiper
		void unequip(int idx); //déséquiper
		void use(int idx, ICharacter &target);
};

#endif