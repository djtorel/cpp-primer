/**
 * Exercise 3.31: Write a program to define an array of ten ints. Give each
 * element the same value as its position in the array.
 */

#include <iostream>

int main() {
    int arr[10]{};

    for (size_t i{0}; i < sizeof arr; i++) {
        arr[i] = i;
    }

    for (auto i : arr) {
        std::cout << i << std::endl;
    }

    return 0;
}
