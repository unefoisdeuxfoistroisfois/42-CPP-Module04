#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter; // Car sa casse le cercle des 2 classe qui on besion l'une de l'autre

class AMateria{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &rhs);
		AMateria(std::string const &type);
		//AMateria(const std::string &type);

		std::string const & getType() const; //Returns the materia type
		//const std::string &getType() const; //Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
		//virtual void use(ICharacter &target);

		virtual ~AMateria();
};

#endif