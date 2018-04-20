// Exercise 2.13: What is the value of j in the following program?

#include <iostream>

int i = 42;
int main()
{
    int i = 100;
    int j = i; // should be 100 due to local int i.
    std::cout << j << std::endl;
}