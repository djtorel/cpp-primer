#include <iostream>

int main()
{
    int i = 29;
    int *p = &i;
    std::cout << "i: " << i << std::endl
              << "*p: " << *p << std::endl
              << std::endl;
    // write code to change the value of a pointer
    int i2 = 123;
    p = &i2;
    std::cout << "i: " << i << std::endl
              << "*p: " << *p << std::endl
              << "i2: " << i2 << std::endl
              << std::endl;
    // write code to change the value to which the pointer points
    *p = 321;
    std::cout << "i: " << i << std::endl
              << "*p: " << *p << std::endl
              << "i2: " << i2 << std::endl
              << std::endl;
}