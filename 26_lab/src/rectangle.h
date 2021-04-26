#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "square.h"

class Rectangle:public Square {
public:
    Rectangle(double new_width, double new_height): Square(new_width, new_height) {

    }
    void draw() const override;

};

#endif //RECTANGLE_H
