#include "functions.h"

int max_value_in_array (int array[], int size) {
    int max_value = 0,c;
    for (int i = 1; i <= size - 1; i++) {
        if (array[i] > array[i - 1]) {
            max_value = array[i];
        } else {
            c = array[i];
            array[i] = array[i - 1];
            array[i - 1] = c;
            max_value = array[i];
        }
    }
    return max_value;
}

int min_value_in_array (int array[], int size) {
    int min_value = 0, c;
    for (int i = 1; i <= size - 1; i++) {
        if (array[i] < array[i - 1]) {
            min_value = array[i];
        } else {
            c = array[i];
            array[i] = array[i - 1];
            array[i - 1] = c;
            min_value = array[i];
        }
    }
    return min_value;
}

int search_equal_values_in_array(int array[], int size, int value) {
    int equal_value = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            equal_value += 1;
        }
    }
    return equal_value;
}