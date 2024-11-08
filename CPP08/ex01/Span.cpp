#include "Span.hpp"

Span::Span(const uint N) : maxSize(N) {}

Span::Span(const Span& ref) : maxSize(ref.maxSize) {}

Span& Span::operator=(const Span& ref)
{
    if (this != &ref)
    {
        this->vect = ref.vect;
        this->maxSize = ref.maxSize;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(const uint number)
{
    if (this->vect.size() >= this->maxSize)
        throw std::runtime_error("Error : maxSize has been reached");
    this->vect.push_back(number);
}