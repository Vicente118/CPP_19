#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    Point point(5.1f, 5.1f);

    if ((bool)bsp(a, b, c, point) == 1) {
        std::cout << "The point is inside the Triangle" << std::endl;
        return (0);
    }
    std::cout << "The point is not inside the Triangle" << std::endl;
    return 0;
}