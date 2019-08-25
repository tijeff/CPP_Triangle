/*!
 * \author Jean-François Marronnier
 * \date 2019-07-11
 */
#include "triangle.h"

#include <stdexcept>
#include <algorithm>

// ---------------------------------------------------------------------------------------------------------------------
triangle::triangle(double length1, double length2, double length3) :
        __length{length1, length2, length3} {
}

// ---------------------------------------------------------------------------------------------------------------------
bool triangle::isEquilateral() const {
    return __length[0] == __length[1] && __length[1] == __length[2];
}

// ---------------------------------------------------------------------------------------------------------------------
bool triangle::isIsosceles() const {
    return __length[0] == __length[1] || __length[1] == __length[2] || __length[0] == __length[2];
}

// ---------------------------------------------------------------------------------------------------------------------
bool triangle::isRectangle() const {
    double length_max = std::max({__length[0], __length[1], __length[2]});
    double length_smaller_1;
    double length_smaller_2;

    if (length_max == __length[0]) {
        length_smaller_1 = __length[1], length_smaller_2 = __length[2];
    } else if (length_max == __length[1]) {
        length_smaller_1 = __length[0], length_smaller_2 = __length[2];
    } else {
        length_smaller_1 = __length[0], length_smaller_2 = __length[1];
    }
    return (length_max * length_max) == (length_smaller_1 * length_smaller_1 + length_smaller_2 * length_smaller_2);
}

// ---------------------------------------------------------------------------------------------------------------------
std::ostream &operator<<(std::ostream &os, const triangle &the_triangle) {
    os << "TRIANGLE: (" << the_triangle.__length[0] << ", " << the_triangle.__length[1] << ", "
       << the_triangle.__length[2] << ")";
    if (the_triangle.isEquilateral()) {
        os << " equilateral";
    } else if (the_triangle.isIsosceles()) {
        os << " isosceles";
    } else if (the_triangle.isRectangle()) {
        os << " rectangle";
    }
    return os;
}