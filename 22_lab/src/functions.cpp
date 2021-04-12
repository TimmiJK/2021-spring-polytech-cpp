#include "functions.h"

int search_element_in_array(int array[], int size, int element) {
    int value, number;
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            value = array[i];
            number = i;
        }
    }
    return number;
}