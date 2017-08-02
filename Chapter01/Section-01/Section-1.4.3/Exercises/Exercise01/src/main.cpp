/**
 * Write your own version of a program that prints the sum of a set of integers
 * from cin
 */

#include <iostream>

int main() {
  int val = 0, sum = 0;

  std::cout << "Enter integers to add (q to exit): " << std::endl;
  while (std::cin >> val) {
    sum += val;
  }

  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}