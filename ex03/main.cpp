#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	testSubject(){

	std::cout << "\n=== SUBJECT TEST ===" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

}

void testUnequip()
{
	std::cout << "\n=== UNEQUIP TEST ===" << std::endl;

	Character character("tester");
	AMateria* materia = new Ice();

	character.equip(materia);
	character.use(0, character);

	character.unequip(0);
	character.use(0, character); // ne doit rien faire

	// La Materia n’est plus possédée par Character.
	delete materia;
}

void testInvalidIndexes()
{
	std::cout << "\n=== INVALID INDEX TEST ===" << std::endl;

	Character character("tester");

	character.use(-1, character);
	character.use(4, character);
	character.unequip(-1);
	character.unequip(4);
}

void testCharacterCopy()
{
	std::cout << "\n=== CHARACTER DEEP COPY TEST ===" << std::endl;

	Character original("original");
	original.equip(new Ice());
	original.equip(new Cure());

	std::cout << "\n--- Copy constructor ---" << std::endl;

	// Création d’un nouvel objet par copie profonde
	Character copy(original);
	copy.use(0, copy);
	copy.use(1, copy);

	std::cout << "\n--- Assignment operator ---" << std::endl;

	// Affectation profonde d’un objet déjà existant
	Character assigned("assigned");
	assigned = original;
	assigned.use(0, assigned);
	assigned.use(1, assigned);
}

void testMateriaSourceCopy()
{
	std::cout << "\n=== MATERIASOURCE DEEP COPY TEST ===" << std::endl;

	MateriaSource original;
	original.learnMateria(new Ice());
	original.learnMateria(new Cure());

	std::cout << "\n--- Copy constructor ---" << std::endl;

	MateriaSource copy(original);

	AMateria* ice = copy.createMateria("ice");
	AMateria* cure = copy.createMateria("cure");
	AMateria* unknown = copy.createMateria("unknown");

	std::cout << "\n--- Assignment operator ---" << std::endl;

	MateriaSource assigned;
	assigned = original;

	AMateria* assignedIce = assigned.createMateria("ice");

	delete ice;
	delete cure;
	delete unknown; // delete NULL est autorisé
  delete assignedIce;

}

int main()
{
	testSubject();
	testUnequip();
	testInvalidIndexes();
	testCharacterCopy();
	testMateriaSourceCopy();

	return (0);
}