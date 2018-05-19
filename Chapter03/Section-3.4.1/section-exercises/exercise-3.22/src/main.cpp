/**
 * Exercise 3.22: Revise the loop that printed the first paragraph in text to
 * instead change the elements in text that correspond to the first paragraph to
 * all uppercase. After you’ve updated text, print its contents.
 */

#include <cctype>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> uppercase_text(const std::vector<std::string> &text) {
    std::vector<std::string> output{text};
    for (auto it{output.begin()}; it != output.end() && !it->empty(); it++) {
        for (auto ch{it->begin()}; ch != it->end(); ch++) {
            *ch = std::toupper(*ch);
        }
    }

    return output;
}

void print_str_vec(const std::vector<std::string> &text) {
    for (auto sentence : text) {
        if (!sentence.empty()) {
            std::cout << sentence << " ";
        } else {
            std::cout << std::endl << std::endl;
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> text{"This is a test.", "Test test test.", "",
                                  "Test"};

    print_str_vec(uppercase_text(text));

    return 0;
}
