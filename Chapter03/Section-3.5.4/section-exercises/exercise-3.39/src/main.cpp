/**
 * Exercise 3.39: Write a program to compare two strings. Now write a program to
 * compare the values of two C-style character strings.
 */

#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

// Helper function to print output of comparisons
void print_result(const std::string &str1, const std::string &message,
                  const std::string &str2) {
    std::cout << std::endl
              << "C++ string: " << str1 << message << str2 << std::endl;
}

void print_result(const char *str1, const char *message, const char *str2) {
    std::cout << std::endl
              << "C string: " << str1 << message << str2 << std::endl;
}

int main() {
    std::cout << "Enter the first string to compare: ";
    std::string cpp_string1{};
    std::getline(std::cin, cpp_string1);

    std::cout << "Enter the second string to compare: ";
    std::string cpp_string2{};
    std::getline(std::cin, cpp_string2);

    if (cpp_string1 == cpp_string2) {
        print_result(cpp_string1, " is equal to ", cpp_string2);
    } else if (cpp_string1 > cpp_string2) {
        print_result(cpp_string1, " is greater than ", cpp_string2);
    } else {
        print_result(cpp_string1, " is less than ", cpp_string2);
    }

    std::cout << std::endl
              << "\n=====================================\n"
              << std::endl;

    // Converting the above cpp style strings to c style strings (char[]);
    char c_string1[cpp_string1.size() + 1], c_string2[cpp_string2.size() + 1];
    std::strcpy(c_string1, cpp_string1.c_str());
    std::strcpy(c_string2, cpp_string2.c_str());

    // compare strings
    int str_compare{strcmp(c_string1, c_string2)};

    if (str_compare == 0) {
        print_result(c_string1, " is equal to ", c_string2);
    } else if (str_compare < 0) {
        print_result(c_string1, " is less than ", c_string2);
    } else if (str_compare > 0) {
        print_result(c_string1, " is greater than ", c_string2);
    }

    std::cout << std::endl;
    return 0;
}
