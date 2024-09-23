#pragma once
#ifndef __POINT__
#define __POINT__

#include "Fixed.hpp"

class Point
{
    private :
        Fixed const x;
        Fixed const y;

    public :
        Point();
        Point(float const a, float const b);
        Point(const Point& point);
        ~Point();
        Point& operator=(const Point& point);
        const Fixed& getX(void) const;
        const Fixed& getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif