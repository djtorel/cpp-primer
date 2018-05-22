/**
 * Exercise 3.40: Write a program to define two character arrays initialized
 * from string literals. Now define a third character array to hold the
 * concatenation of the two arrays. Use strcpy and strcat to copy the two arrays
 * into the third.
 */

#include <cstring>
#include <iostream>

int main() {
    char str1[]{"Hello, "};
    char str2[]{"World!"};

    char str3[(std::strlen(str1) + 1) + (std::strlen(str2) + 1)];

    std::strcpy(str3, str1);
    std::strcat(str3, str2);

    std::cout << str3 << std::endl;

    return 0;
}
