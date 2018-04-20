// Exercise 2.10: What are the initial values, if any, of each of the following
// variables?

#include <iostream>
#include <string>

// Empty string
std::string global_str;

// Inits to 0 because it's not in a function
int global_int;
int main()
{
    // Uninitialized, undefined value
    int local_int;
    // Empty string
    std::string local_str;

    std::cout << "global_str: " << global_str << std::endl
              << "global_int: " << global_int << std::endl
              << "local_int: " << local_int << std::endl
              << "local_str: " << local_str << std::endl;
}