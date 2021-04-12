// Напишите функцию, которая заполняет массив случайными
// целыми числами из диапазона от 0 до n. Воспользуйтесь функциями
// std::rand() и std::srand().

#include <cstdlib>
#include <ctime>
#include <iostream>

int fill_array(int array[], int size, int n) {
    for (int i = 0; i < size; i++) {
        array[i] = std::rand() % (n + 1);
        return array[i];
    }
}

int main() {
    std::srand(NULL);
    int array[10];
    fill_array(array, 10, 6);
    return 0;
}
