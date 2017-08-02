/**
 * Rewrite the first to exercises from 1.4 using for loops
 */

#include <iostream>

int main() {
  int sum = 0;

  for (int i = 50; i <= 100; ++i) {
    sum += i;
  }

  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;

  for (int i = 0; i <= 10; ++i) {
    std::cout << i << std::endl;
  }
  
  return 0;
}