#include <iostream>

// Exercise 2.14: Is the following program legal? If so, what values are
// printed?
int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }

    std::cout << i << " " << sum << std::endl;
    //   prints 100 45
}