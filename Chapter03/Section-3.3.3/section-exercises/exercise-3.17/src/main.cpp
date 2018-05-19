/**
 * Exercise 3.17: Read a sequence of words from cin and store the values a
 * vector. After you’ve read all the words, process the vector and change each
 * word to uppercase. Print the transformed elements, eight words to a line.
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

// Helper function to format output
std::string format_output(const std::vector<std::string> &input) {
    int cnt{0};
    std::string output{};
    for (auto &word : input) {
        if (++cnt <= 8) {
            for (auto &ch : word) {
                output += std::toupper(ch);
            }
            output += " ";
        } else {
            output += '\n';
            cnt = 0;
        }
    }

    return output;
}

// Helper function to take input
std::vector<std::string> get_input() {
    // Prompt for input
    std::cout << "Enter words to format (/q to quit): " << std::endl;
    std::vector<std::string> output{};
    std::string input{};
    // While not /q push input into output
    while (std::cin >> input) {
        if (input == "/q") {
            break;
        }

        output.push_back(input);
    }

    return output;
}

int main() {
    std::vector<std::string> str_store = get_input();
    std::cout << format_output(str_store) << std::endl;

    return 0;
}
