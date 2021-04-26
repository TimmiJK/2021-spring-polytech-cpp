#include "square.h"

void Square::draw() const {
    for (double i = 0; i < height; i++) {
        for (double j = 0; j < width; j++) {
            if (i > 0 && i < height - 1) {
                if (j < 1 || j > width - 2) {
                    std::cout << "* ";
                } else {
                    std::cout << "  ";
                }
            } else if (i == 0 || i == height - 1) {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}
