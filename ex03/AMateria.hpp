#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

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