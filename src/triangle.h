/*!
 * \author Jean-François Marronnier
 * \date 2019-07-11
 *
 * \brief Class to manage triangle.
 *         Provide operation around triangle.
 */
#ifndef TRIANGLES_TRIANGLE_H
#define TRIANGLES_TRIANGLE_H


#include <ostream>

class triangle {
public:
    triangle(double, double, double);

    [[nodiscard]] bool isEquilateral() const;

    [[nodiscard]] bool isIsosceles() const;

    [[nodiscard]] bool isRectangle() const;

    friend std::ostream &operator<<(std::ostream &os, const triangle &d);

private:
    double __length[3];
};


#endif //TRIANGLES_TRIANGLE_H
