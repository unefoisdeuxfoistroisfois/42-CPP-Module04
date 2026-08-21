#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	protected:

	public:
		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &rhs);
		~Ice();

		AMateria *clone() const;
		void use(ICharacter& target);// pas obliger de mettre le virtual poru les enfants

};

#endif