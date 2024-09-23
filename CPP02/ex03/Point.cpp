#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float const a, float const b) : x(Fixed(a)), y(Fixed(b)) {}

Point::Point(const Point& point) : x(point.x), y(point.y) {}

Point::~Point() {}

Point& Point::operator=(const Point& point) {return *this;}

const Fixed& Point::getX() const
{
    return this->x;
}

const Fixed& Point::getY() const
{
    return this->y;
}