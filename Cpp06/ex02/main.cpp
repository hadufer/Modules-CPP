#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base::~Base()
{}

Base *generate()
{
    srand(time(0));
    double rx = rand()/static_cast<double>(RAND_MAX);
    int that = 1 + static_cast<int>( rx * (3 - 1));
    switch (that)
    {
        case 1:
            return new A();
        case 2:
            return new B();
        case 3:
            return new C();
    }
    return NULL;
}

void    identify(Base *p)
{
    A *aCasted = dynamic_cast<A*>(p);
    B *bCasted = dynamic_cast<B*>(p);
    C *cCasted = dynamic_cast<C*>(p);

    if (aCasted)
        std::cout << "it's a class A ptr" << std::endl;
    if (bCasted)
        std::cout << "it's a class B ptr" << std::endl;
    if (cCasted)
        std::cout << "it's a class C ptr" << std::endl;
}

void    identify(Base &p)
{
    try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "it's a class A ref" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
	    static_cast<void>(dynamic_cast<B &>(p));
		std::cout << "it's a class B ref" << std::endl;
	}
	catch(const std::exception& e) {}

	try
	{
		static_cast<void>(dynamic_cast<C &>(p));
		std::cout << "it's a class C ref" << std::endl;
	}
	catch(const std::exception& e) {}

}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
}