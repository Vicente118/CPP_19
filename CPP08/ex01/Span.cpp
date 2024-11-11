#include "Span.hpp"

Span::Span(const uint N) : maxSize(N) {}

Span::Span(const Span& ref) : vect(ref.vect), maxSize(ref.maxSize) {}

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

uint Span::shortestSpan()
{
    if ( this->vect.size() < 2)
        throw std::runtime_error("Error : container size too small");

    std::vector<uint>::iterator it = this->vect.begin();

    std::sort(this->vect.begin(), this->vect.end());
    uint distance = std::numeric_limits<unsigned int>::max();
    
    for (; it != this->vect.end() - 1; it++) {
        uint currentDist = *(it + 1) - *it;
        if (currentDist < distance)
            distance = currentDist;
    }
    return distance;
}

uint Span::longestSpan()
{
    if ( this->vect.size() < 2)
        throw std::runtime_error("Error : container size too small");

    std::sort(this->vect.begin(), this->vect.end());

    return (this->vect.back() - this->vect.front());
}