#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square:public Shape {
public:
    Square (double new_width, double new_height): Shape(new_width, new_height) {

    }
    void draw() const override;
};

#endif //SQUARE_H
