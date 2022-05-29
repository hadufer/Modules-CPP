#pragma once
#include "AMateria.h"
#include <string>

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {};
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter{
    protected:
        std::string m_name;
        AMateria *inv[4];
        AMateria *groundMateriaStack[1024];
        int groundMateriaStackPointer;
    public:
        Character();
        Character(const Character &c);
        Character(const std::string &name);
        Character &operator=(const Character &c);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};