#include "AMateria.h"
#include "IMateriaSource.h"
#include "ICharacter.h"
#include <iostream>

int main()
{
    IMateriaSource *src = new MateriaSource();
    Ice *ice = new Ice();
    Cure *cure = new Cure();
    src->learnMateria(ice);
    src->learnMateria(cure);
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    delete ice;
    delete cure;
    return 0;
}
