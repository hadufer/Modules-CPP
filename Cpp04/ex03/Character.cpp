#include "ICharacter.h"
#include <iostream>

Character::Character() : m_name ("")
{
    for (int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
    groundMateriaStackPointer = 0;
}

Character::Character(const Character &c)
{
    for (int i = 0; i < 4; i++)
    {
        if (c.inv[i])
            inv[i] = c.inv[i]->clone();
    }
    m_name = c.m_name;
    groundMateriaStackPointer = c.groundMateriaStackPointer;
}

Character::Character(const std::string &name) : m_name(name)
{
    for (int i = 0; i < 4; i++)
    {
        inv[i] = NULL;
    }
    groundMateriaStackPointer = 0;
}

Character &Character::operator=(const Character &c)
{
    for (int i = 0; i < 4; i++)
    {
        if (c.inv[i])
        {
            if (inv[i])
                delete inv[i];
            inv[i] = c.inv[i]->clone();
        }
    }
    groundMateriaStackPointer = c.groundMateriaStackPointer;
    m_name = c.m_name;
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i];
    }
    for (int i = groundMateriaStackPointer; i >= 0; i--)
    {
        delete groundMateriaStack[groundMateriaStackPointer];
    }
}

void Character::equip(AMateria *m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!inv[i])
        {
            inv[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (groundMateriaStackPointer == 1024)
    {
        std::cout << "TOO MUCH Materia on the ground" << std::endl;
        return ;
    }
    if (inv[idx])
    {
        inv[idx] = NULL;
        groundMateriaStack[groundMateriaStackPointer] = inv[idx];
        groundMateriaStackPointer++;
    }
}

void Character::use(int idx, ICharacter &c)
{
    if (inv[idx])
        inv[idx]->use(c);
}

std::string const &Character::getName() const
{
    return m_name;
}