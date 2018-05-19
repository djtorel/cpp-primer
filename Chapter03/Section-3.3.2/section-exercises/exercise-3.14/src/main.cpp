/**
 * Exercise 3.14: Write a program to read a sequence of ints from cin and store
 * those values in a vector.
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::string vec_to_string(const std::vector<int> vec) {
    // Format the vec to a printable format and store in string
    // Beginning of formatted string
    std::string out_string{"[\n  "};
    int cnt{0};
    // Loop through vec, increase cnt or add a new line and space, and reset cnt
    for (auto &num : vec) {
        if (cnt < 5) {
            cnt++;
        } else {
            out_string += "\n  ";
            cnt = 1;
        }
        // Add the num to the string with tab spacing
        out_string += std::to_string(num) + ",\t";
    }

    // Remove the final comma and add new line with end bracket
    out_string = out_string.substr(0, out_string.length() - 2);
    out_string += "\n]";

    return out_string;
}

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
        // Check if it's a valid int
        bool is_valid{true};
        for (auto ch : input) {
            if (!std::isdigit(ch)) {
                is_valid = false;
            }
        }

        // Store if valid, return error if not
        if (is_valid) {
            int_store.push_back(std::stoi(input));
        } else {
            std::cout << "Invalid input: " << input << std::endl;
        }
    }

    std::cout << "The numbers stored are:" << std::endl;

    std::string output = vec_to_string(int_store);

    std::cout << output << std::endl;

    return 0;
}
