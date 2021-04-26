#include "line.h"

void Line::draw() const {
    if (width > 0 && height == 0) {
        for (double i = 0; i < width; i++) {
            std::cout << "*";
        }
    } else if (height > 0 && width == 0) {
        for (double j = 0; j < height; j++) {
            std::cout << "*" << std::endl;
        }
    }
}
