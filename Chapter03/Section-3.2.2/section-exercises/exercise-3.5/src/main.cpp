/**
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    cout << "Enter strings to concatenate (/quit to quit)" << endl;

    // Concat straight from intput
    string input_string{}, final_string{};
    // while (cin >> input_string) {
    //     if (input_string == "/quit") {
    //         break;
    //     }

    //     final_string += input_string;
    // }

    // Concat with spaces between strings
    while (cin >> input_string) {
        if (input_string == "/quit") {
            break;
        }

        final_string += " " + input_string;
    }

    cout << endl << final_string << endl;

    return 0;
}
