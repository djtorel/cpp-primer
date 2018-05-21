/**
 * Exercise 3.37: What does the following program do?
 *
 * It prints out the characters in the array in *cp until it reaches a null
 * character. Which is currently not stored in the array. Behavior is undefined.
 */

#include <iostream>

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};

    const char *cp = ca;

    while (*cp) {
        std::cout << *cp << std::endl;
        ++cp;
    }

    return 0;
}
