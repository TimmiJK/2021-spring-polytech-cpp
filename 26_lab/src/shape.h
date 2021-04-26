#ifndef SHAPE_H
#define SHAPE_H

#include "iostream"

class Shape {
protected:
    double width;
    double height;
public:
    Shape(double new_width, double new_height): width(new_width), height(new_height){

    }
    virtual void draw () const = 0;

};

#endif //SHAPE_H