#pragma once
#include "AMateria.h"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inv[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &m);
        MateriaSource &operator=(const MateriaSource &m);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};