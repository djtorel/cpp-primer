#include <iostream>
// Exercise 2.16: Which, if any, of the following assignments are invalid? If
// they are valid, explain what they do.
int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    // Valid, sets value of d to 3.14159
    r2 = 3.14159;
    std::cout << r2 << std::endl;
    // Valid, sets value of d to value of i (0)
    r2 = r1;
    std::cout << r2 << std::endl;
    // Valid, sets value of i to value of d (0)
    i = r2;
    std::cout << i << std::endl;
    // Valid, sets value of i to d (0)
    r1 = d;
    std::cout << r1 << std::endl;
}