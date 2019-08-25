//
// Created by Jean-François Marronnier on 2019-07-11.
//

#ifndef TRIANGLES_TRIANGLE_H
#define TRIANGLES_TRIANGLE_H


#include <ostream>

class triangle {
public:
    triangle(unsigned int, unsigned int, unsigned int);

    [[nodiscard]] bool isEquilateral() const;

    [[nodiscard]] bool isIsocele() const;

    [[nodiscard]] bool isRectangle() const;

    friend std::ostream &operator<<(std::ostream &os, const triangle &d);

private:
    unsigned int __length[3];
};


#endif //TRIANGLES_TRIANGLE_H
