/**
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change the
 * program to report whether the strings have the same length, and if not,
 * report which is longer.
 */

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Helper function for output
void print_message(string str1, string message, string str2) {
    cout << str1 << message << str2 << endl;
}

int main() {
    string str1{}, str2{};
    // Get input for strings
    cout << "Enter two strings to compare separated by spaces: ";
    cin >> str1 >> str2;

    if (str1 == str2) {
        print_message(str1, " is equal to ", str2);
    } else if (str1 > str2) {
        print_message(str1, " is greater than ", str2);
    } else {
        print_message(str1, " is lesser than ", str2);
    }

    if (str1.length() == str2.length()) {
        print_message(str1, " is the same length as ", str2);
    } else if (str1.length() > str2.length()) {
        print_message(str1, " is longer than ", str2);
    } else {
        print_message(str1, " has less length than ", str2);
    }

    return 0;
}
