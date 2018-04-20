#include <iostream>

// Exercise 2.17: What does the following code print?
int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
    // should print "10 10"
}