/**
 * Exercise 3.20: Read a set of integers into a vector. Print the sum of each
 * pair of adjacent elements. Change your program so that it prints the sum of
 * the first and last elements, followed by the sum of the second and
 * second-to-last, and so on.
 */

#include <iostream>
#include <vector>

// Function to find sums of adjacent pairs in an int vector. Returns a vector of
// ints
std::vector<int> adj_sum(const std::vector<int> &nums) {
    std::vector<int> sums{};
    for (decltype(nums.size()) i{0}; i < nums.size() - 1; i++) {
        sums.push_back(nums[i] + nums[i + 1]);
    }

    return sums;
}

// Function to find the sums of pairs starting with first and last, working
// inward. Returns a vector of ints
std::vector<int> out_in_sum(const std::vector<int> &int_vec) {
    std::vector<int> sums;

    // Out point to sum
    decltype(int_vec.size()) out{int_vec.size() - 1};

    // Set loop end to int_vec.size() / 2. Only need to loop through half of the
    // vector.
    decltype(int_vec.size()) loop_end{int_vec.size() / 2};

    // If the vector has odd contents, then add one in order to sum middle int
    // object.
    // Note: currently middle the object sums itself in loop, could add
    // condition in loop to just return itself if this is not desired..
    if (loop_end % 2 != 0) {
        loop_end += 1;
    }

    // Loop through half of the vector, add inner int with outer in, push into
    // sums vector
    for (decltype(int_vec.size()) in{0}; in < loop_end; in++) {
        sums.push_back(int_vec[in] + int_vec[out]);
        out--;
    }

    return sums;
}

// Function to print vector of ints to ostream. Returns ref to ostream
void print_ints(const std::vector<int> &int_vec) {
    std::cout << std::endl;
    for (decltype(int_vec.size()) i{0}; i < int_vec.size(); i++) {
        std::cout << int_vec[i];
        if (i == int_vec.size() - 1) {
            std::cout << std::endl;
        } else {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums{23, 12, 3, 134, 123, 535, 123, 1312};
    std::vector<int> adj_sums = adj_sum(nums);
    std::vector<int> out_in_sums = out_in_sum(nums);
    print_ints(adj_sums);
    print_ints(out_in_sums);

    return 0;
}
