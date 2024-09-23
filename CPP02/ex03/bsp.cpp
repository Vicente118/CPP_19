#include "Point.hpp"

static float determinant(Point const start, Point const end, Point const point)
{
    return (end.getX().toFloat() - start.getX().toFloat()) * (point.getY().toFloat() - start.getY().toFloat())
      - (end.getY().toFloat() - start.getY().toFloat()) * (point.getX().toFloat() - start.getX().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if (determinant(a, b, point) >= 0 && determinant(b, c, point) >= 0 && determinant(c, a, point) >=0)
        return true;
    if (determinant(a, b, point) <= 0 && determinant(b, c, point) <= 0 && determinant(c, a, point) <=0)
        return true;
    return false;
}
