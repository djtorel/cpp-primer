/**
 * What does the following for loop do? What is the final value of sum?
 * 
 * int sum = 0;
 * for (int i = -100; i <= 100; ++i)
 *   sum += i;
 * 
 * I expect sum to be 0
 * Adding -100 to 0, then 0 to 100 would cancel eachother out
 */

#include <iostream>

int main() {
  int sum = 0;
  for(int i = -100; i <= 100; ++i) {
    sum += i;
  }
  std::cout << sum << std::endl;
}