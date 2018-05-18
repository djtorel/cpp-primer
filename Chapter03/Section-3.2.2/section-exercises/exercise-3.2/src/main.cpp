/**
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string word;

    cout << "Enter words to be repeated:" << endl;
    // Reading lines at a time
    // while (getline(cin, word)) {
    //     cout << word << endl;
    // }

    // Reading words at a time
    while (cin >> word) {
        cout << word << endl;
    }

    return 0;
}
