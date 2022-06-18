#include "Span.h"
#include <iostream>

void baseTest()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    baseTest();
    std::cout << std::endl;
    Span test(100);
    test.addNumber(150);
    test.fillSpanRdm();
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
}