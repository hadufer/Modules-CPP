#pragma once
#include "Brain.h"
#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);
        virtual ~Animal();
        virtual std::string getType() const;
        virtual void makeSound() const;
};

class Dog: public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &a);
        Dog &operator=(const Dog &a);
        ~Dog();
        std::string getType() const;
        void makeSound() const;
};

class Cat: public Animal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &a);
        Cat &operator=(const Cat &a);
        ~Cat();
        std::string getType() const;
        void makeSound() const;
};

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &a);
        WrongAnimal &operator=(const WrongAnimal &a);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &a);
        WrongCat &operator=(const WrongCat &a);
        ~WrongCat();
        std::string getType() const;
        void makeSound() const;
};