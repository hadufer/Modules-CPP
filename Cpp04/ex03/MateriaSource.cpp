#include "IMateriaSource.h"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
    for (int i = 0; i < 4; i++)
    {
        if (m.inv[i])
            inv[i] = m.inv[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
    for (int i = 0; i < 4; i++)
    {
        if (m.inv[i])
        {
            if (inv[i])
                delete inv[i];
            inv[i] = m.inv[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i];
    }
}

void MateriaSource::learnMateria(AMateria *a)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inv[i])
        {
            inv[i] = a->clone();
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] && inv[i]->getType() == type)
        {
            return inv[i]->clone();
        }
    }
    return 0;
}