#pragma once
#include <vector>

class Span {
    unsigned int n;
    std::vector<int> span;
    public:
        Span(unsigned int N = 0);
        Span(const Span &s);
        Span &operator =(const Span &s);
        ~Span();
        void addNumber(const int i);
        void fillSpanRdm();
        int shortestSpan();
        int longestSpan();
};