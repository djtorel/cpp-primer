/**
 * Exercise 3.14: Write a program to read a sequence of ints from cin and store
 * those values in a vector.
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> int_store{};
    std::string input{};

    std::cout << "Enter in some numbers to store separated by spaces or "
              << "new lines (/q to quit):" << std::endl;

    // Loop over input, validate is int
    while (std::cin >> input) {
        if (input == "/q") {
            break;
        }
        bool is_valid{true};
        for (auto ch : input) {
            if (!std::isdigit(ch)) {
                is_valid = false;
            }
        }

        if (is_valid) {
            int_store.push_back(std::stoi(input));
        } else {
            std::cout << "Invalid input: " << input << std::endl;
        }
    }

    std::cout << "The numbers stored are:" << std::endl;

    int cnt{0};
    for (auto num : int_store) {
        if (cnt < 5) {
            cnt++;
        } else {
            std::cout << std::endl;
            cnt = 1;
        }
        std::cout << num << " ";
    }

    return 0;
}
