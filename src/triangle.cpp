//
// Created by Jean-François Marronnier on 2019-07-11.
//

#include "triangle.h"

#include <stdexcept>

triangle::triangle(unsigned int length1, unsigned int length2, unsigned int length3) :
        __length{length1, length2, length3} {
}

bool triangle::isEquilateral() const {
    return true;
}