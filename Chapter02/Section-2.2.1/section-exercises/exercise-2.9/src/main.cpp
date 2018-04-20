/*
Exercise 2.9: Explain the following definitions. For those that are illegal,
explain what’s wrong and how to correct it.

(a) std::cin >> int input_value;
    Invalid, can't initialize a variable with std::cin
(b) int i = { 3.14 };
    Invalid, narrowing conversion. Could (will) lose data so it's not allowed
(c) double salary = wage = 9999.99;
    Invalid, wage is undefined
(d) int i = 3.14;
    Valid, but everything after decimal is truncated, so turns to 3
*/

#include <iostream>

int main()
{
    // std::cin >> int input_value;
    // int i = {3.14};
    // double salary = wage = 9999.99;
    int i = 3.14;
}