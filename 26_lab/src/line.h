#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line:public Shape {
public:
    Line(double new_width, double new_height): Shape(new_width, new_height) {

    }
    void draw () const override;

};

#endif //LINE_H
