/**
 * Write a program that prompts the user for two integers. Print each number in
 * the range specified by thos two integers.
 * 
 * I'm printing numbers in range, inclusive.
 */

#include <iostream>

int main() {
  std::cout << "Enter two integers: " << std::endl;
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2;

  if (num1 < num2) {
    while (num1 <= num2) {
      std::cout << num1 << std::endl;
      ++num1;
    }
  } else {
    while (num1 >= num2) {
      std::cout << num1 << std::endl;
      --num1;
    }
  }
}