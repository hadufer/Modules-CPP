#pragma once
#include "ICharacter.h"
#include <string>

class ICharacter;

class AMateria
{
    protected:
        std::string m_type;
    public:
        AMateria();
        AMateria(const AMateria &a);
        AMateria(const std::string &type);
        AMateria &operator=(const AMateria &a);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &a);
        Ice(const std::string &type);
        ~Ice();
        Ice &operator=(const Ice &a);
        Ice* clone() const;
        void use(ICharacter& target);
};

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &a);
        Cure(const std::string &type);
        ~Cure();
        Cure &operator=(const Cure &a);
        Cure* clone() const;
        void use(ICharacter& target);
};