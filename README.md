# C++ - Module 04
## Polymorphisme de sous-typage, classes abstraites et interfaces
---

## Notions
1. Polymorphisme (subtype polymorphism) via fonctions `virtual`
2. Destructeur `virtual` (obligatoire dès qu'une classe a des méthodes virtuelles)
3. Liaison dynamique vs liaison statique (`WrongAnimal` vs `Animal`)
4. Fonctions virtuelles pures (`= 0`) et classes abstraites
5. Composition (`Brain` comme attribut d'`Animal`)
6. Interfaces en C++ (classes purement abstraites, préfixe `I`)
7. Design pattern : héritage + interface combinés (`AMateria`, `ICharacter`, `IMateriaSource`)

---

## Exercices

| Exercice | Sujet | Notions |
|----------|-------|---------|
| ex00 | Polymorphism | `Animal`/`Cat`/`Dog` (virtual) vs `WrongAnimal`/`WrongCat` (non virtual) — mise en évidence de la liaison dynamique |
| ex01 | I don't want to set the world on fire | Ajout d'un attribut `Brain*` dans `Animal`, gestion mémoire (constructeur/destructeur/copie profonde) |
| ex02 | Abstract class | `Animal` devient une classe abstraite via une fonction virtuelle pure |
| ex03 | Interface & recursivity | Interfaces `ICharacter`/`IMateriaSource`, classe abstraite `AMateria`, système d'inventaire (`Character`, `Ice`, `Cure`, `MateriaSource`) |
