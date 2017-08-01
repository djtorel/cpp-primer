/**
 * Write a program that uses the -- operator that prints the numbers from 10
 * to zero.
 */

#include <iostream>

int main() {
  int val = 10;
  while (val >= 0) {
    std::cout << val << std::endl;
    --val;
  }

  return 0;
}