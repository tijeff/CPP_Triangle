//
// Created by Jean-François Marronnier on 2019-07-11.
//

#ifndef TRIANGLES_TRIANGLE_H
#define TRIANGLES_TRIANGLE_H


class triangle {
public:
    triangle(unsigned int, unsigned int, unsigned int);

    bool isEquilateral() const;

private:
    unsigned int __length[3];
};


#endif //TRIANGLES_TRIANGLE_H
