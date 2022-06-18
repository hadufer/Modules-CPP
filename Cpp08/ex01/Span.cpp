#include "Span.h"
#include <algorithm>
#include <numeric>
#include <cmath>
#include <climits>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
Span::Span(unsigned int n) : n(n)
{}

Span::Span(const Span &s) : n(s.n)
{}

Span &Span::operator =(const Span &s)
{
    n = s.n;
    return *this;
}

Span::~Span()
{}

void Span::addNumber(const int i)
{
    if (span.size() >= n)
        throw std::exception();
    span.push_back(i);
}

int rdmInt()
{
    return (std::rand() % 100000);
}

void Span::fillSpanRdm()
{
    size_t previousSize = span.size();
    span.resize(n);
    std::srand(std::time(NULL));
    std::generate(span.begin() + previousSize, span.end(), rdmInt);
}

int Span::longestSpan()
{
    if (span.size() <= 1)
        throw std::exception();
    std::sort(span.begin(), span.end());
    return (abs(*span.rbegin() - *span.begin()));
}

int Span::shortestSpan()
{
    if (span.size() <= 1)
        throw std::exception();
    std::vector<int> dumbVector = span;
    std::vector<int> retVector;
    retVector.resize(dumbVector.size());
    std::sort(dumbVector.begin(), dumbVector.end());
    std::adjacent_difference(dumbVector.begin(), dumbVector.end(), retVector.begin());
    return(*(std::min_element(retVector.begin(), retVector.end())));
}